# Doubly-Linked-List

If you want to add a specific type or class into the list, you can add it in the Node struct.


# COMMANDS:

- add (int id, int qty = 1)
    Add an element to the list.
    id = identifier
    qty = quantity
- remove(int id, int qty = 1)
    Remove an element of the list.
    id = identifier
    qty = quantity
- getBegin()
    Return the beginning of the list
- getEnd()
    Return the ending of the list
- setBegin(Node* begin)
    Set the first element of the list
- setEnd(Node* end)
    Set the last element of the list
- isEmpty()
    Test if the list is empty. Return "false" if the list isn't empty and "true" if it is.
- getNode(int type)
    Search for a specific element in the list
