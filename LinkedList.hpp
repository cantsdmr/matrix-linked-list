#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <iostream>

#include "Node.hpp"

template <class T>
class LinkedList {
public: // DO NOT CHANGE THIS PART.
    LinkedList();
    LinkedList(const LinkedList &obj);

    ~LinkedList();

    int getSize() const;
    bool isEmpty() const;

    void insertAtTheFront(const T &data);
    void insertAtTheEnd(const T &data);
    void insertBeforeNode(const T &data, Node<T> *node);

    void deleteNode(Node<T> *node);
    void deleteAllNodes();

    Node<T> *getFirstNode() const;
    Node<T> *getLastNode() const;
    Node<T> *getNodeWithData(const T &data) const;

    void traverseAllNodes();
    void traverseAllNodes(Node<T> *node);

    LinkedList &operator=(const LinkedList &rhs);

private: // YOU MAY ADD YOUR OWN UTILITY MEMBER FUNCTIONS HERE.
    bool isNodeInTheList(Node<T> *node);

private: // DO NOT CHANGE THIS PART.
    int size;

    Node<T> *head;
    Node<T> *tail;
};

#endif //LINKED_LIST_HPP
