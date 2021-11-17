#include <iostream>

#include "LinkedList.hpp"

int main() {
    LinkedList<int> llist;

    llist.traverseAllNodes();

    llist.insertAtTheEnd(6);
    llist.insertAtTheFront(2);
    llist.insertBeforeNode(4, llist.getNodeWithData(6));

    llist.traverseAllNodes();

    llist.deleteNode(llist.getNodeWithData(4));

    llist.traverseAllNodes();

    return 0;
}
