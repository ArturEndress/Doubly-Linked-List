#pragma once
#define MAX_COUNTER 999

struct Node
{
	int id;
	int qty;

	// Here you can add any other data type or class you want
	
	Node *prev, *next;

}; 

class DoublyLinkedList

{
public:
	DoublyLinkedList();
	~DoublyLinkedList();

	void add(int id, int qty = 1);
	void remove(int id, int qty = 1);
	
	Node *getBegin() { return begin; }
	Node *getEnd() { return end; }
	void setBegin(Node* begin) { this -> begin = begin; }
	void setEnd(Node* end) { this->end = end; }


	bool isEmpty();
	Node* getNode(int type);

protected:
	Node * begin, *end;

};

