# Doubly-Linked-List

If you want to add a specific type or class into the list, you can add it in the Node struct.


# COMMANDS:

- add (int id, int qty = 1)<br>
    Add an element to the list.<br>
    >id = identifier<br>
    >qty = quantity<br>
- remove(int id, int qty = 1)<br>
    Remove an element of the list.<br>
    >id = identifier<br>
    >qty = quantity<br>
- getBegin()<br>
    Return the beginning of the list<br>
- getEnd()<br>
    Return the ending of the list<br>
- setBegin(Node* begin)<br>
    Set the first element of the list<br>
    >begin = new begin node value<br>
- setEnd(Node* end)<br>
    Set the last element of the list<br>
    >end = new end node value<br>
- isEmpty()<br>
    Test if the list is empty. Return "false" if the list isn't empty and "true" if it is.<br>
- getNode(int id)<br>
    Search for a specific element in the list<br>
    >id = identifier
