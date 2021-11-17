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

template <class T>
LinkedList<T>::LinkedList() {
    /* TODO */
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList &obj) {
    /* TODO */
}

template <class T>
LinkedList<T>::~LinkedList() {
    /* TODO */
}

template <class T>
int LinkedList<T>::getSize() const {
    /* TODO */
}

template <class T>
bool LinkedList<T>::isEmpty() const {
    /* TODO */
}

template <class T>
void LinkedList<T>::insertAtTheFront(const T &data) {
    /* TODO */
}

template <class T>
void LinkedList<T>::insertAtTheEnd(const T &data) {
    /* TODO */
}

template <class T>
void LinkedList<T>::insertBeforeNode(const T &data, Node<T> *node) {
    /* TODO */
}

template <class T>
void LinkedList<T>::deleteNode(Node<T> *node) {
    /* TODO */
}

template <class T>
void LinkedList<T>::deleteAllNodes() {
    /* TODO */
}

template <class T>
Node<T> * LinkedList<T>::getFirstNode() const {
    /* TODO */
}

template <class T>
Node<T> * LinkedList<T>::getLastNode() const {
    /* TODO */
}

template <class T>
Node<T> * LinkedList<T>::getNodeWithData(const T &data) const {
    /* TODO */
}

template <class T>
void LinkedList<T>::traverseAllNodes() {
    if (head == NULL) {
        std::cout << "empty" << std::endl;
        return;
    }

    Node<T> *temp = head;

    while (temp) {
        std::cout << *temp << " ";
        temp = temp->next;
    }

    std::cout << std::endl;
}

template <class T>
void LinkedList<T>::traverseAllNodes(Node<T> *node) {
    /* TODO */
}

template <class T>
LinkedList<T> & LinkedList<T>::operator=(const LinkedList &rhs) {
    /* TODO */
}

template <class T>
bool LinkedList<T>::isNodeInTheList(Node<T> *node) {
    if (node) {
        Node<T> *temp = head;

        while (temp) {
            if (temp == node) return true;
            temp = temp->next;
        }
    }

    return false;
}

#endif //LINKED_LIST_HPP
