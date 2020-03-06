#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList()
{
	// starts empty
	begin = NULL;
	end = NULL;
} 

DoublyLinkedList::~DoublyLinkedList()
{
}


void DoublyLinkedList::add(int id, int qty = 1)
{
	// create a new node
	Node *newNode = new Node;
	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->id = id;
	newNode->qty = qty;

	// if the list is empty, insert new node
	if (isEmpty()) 
	{
		begin = newNode;
		end = newNode;
	}

	// If the list already has something...
	else 
	{
		// search the node in the list by id order
		Node* aux = begin;
		while (aux != NULL && aux->id < id)
		{
			aux = aux->next;
		}

		// if the node id doesn't exist on the list, add it in the end
		if (aux == NULL) 
		{
			newNode->prev = end;
			end->next = newNode;
			end = newNode;
		}

		else { 
			
			// If it does exist, increase the quantity counter
			if (aux->id == id)
			{
				// You can change the max number of the same node in the header
				if (aux->qty < MAX_COUNTER)
				{
					aux->qty++;
				}
			}
			
			// Insert the node in the beginning of the list
			else if (aux == begin) 
			{
				newNode->next = aux; 
				begin->prev = newNode;
				begin = newNode;
			}

			// Insert between two nodes diferent from the "begin" and "end" Nodes
			else 
			{
				newNode->prev = aux->prev;
				newNode->next = aux;

				aux->prev->next = newNode;
				aux->prev = newNode;
			}
		}
	}
}

void DoublyLinkedList::remove(int id, int qty = 1)
{
	if (!isEmpty())
	{
		//Procura item na lista
		Node *aux = getNode(id);

		if (aux)
		{
			// Prevents negative values in the parameter
			if (qty < 0)
				qty*=-1;
			// Decreases the quantity of the nodes by the desired amount
			aux->qty -= qty;

			// Prevents negative values in the node
			if (aux->qty - qty < 0)
				aux->qty = 0;

			if (aux->qty == 0)
			{
				if (begin == end) // 1 element on the list
				{
					//delete begin;
					begin = NULL;
					end = NULL;
				}
				else if (aux == begin)
				{
					begin = begin->next;
					begin->prev = NULL;
					delete aux;
				}
				else if (aux == end)
				{
					end = end->prev;
					end->next = NULL;
					delete aux;
				}
				else
				{
					aux->prev->next = aux->next;
					aux->next->prev = aux->prev;
					delete aux;
				}
			}
		}
	}
}

bool DoublyLinkedList::isEmpty() // Test if the list is empty
{
	if (begin == NULL) 
		return true;
	return false;
}

Node * DoublyLinkedList::getNode(int id) // Search for a specific node
{
	Node* aux = begin;
	while (aux != NULL && aux->id != id)
	{
		aux = aux->next;
	}
	return aux;
}

