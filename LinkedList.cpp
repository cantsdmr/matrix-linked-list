//
// Created by Can on 11/17/2021.
//

#include "LinkedList.hpp"
#include "Node.hpp"

template <class T>
LinkedList<T>::LinkedList() {
    this->head = null;
    this->tail = null;
    this->size = 0;
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList &obj) {
    /* TODO */
}

template <class T>
LinkedList<T>::~LinkedList() {
    if (size == 0) {
        return;
    }

    Node<T> *traveler = head;
    Node<T> *tmp = traveler;

    while (tmp) {
        tmp = traveler;
        delete traveler;
        traveler = tmp->next;
    }
}

template <class T>
int LinkedList<T>::getSize() const {
    return size;
}

template <class T>
bool LinkedList<T>::isEmpty() const {
    return size == 0;
}

template <class T>
void LinkedList<T>::insertAtTheFront(const T &data) {
    Node<T> *newNode = new Node(data,null, head);
    this->head = newNode;
    this->size++;
}

template <class T>
void LinkedList<T>::insertAtTheEnd(const T &data) {
    Node<T> *newNode = new Node(data, this->tail, null);
    this->tail = newNode;
    this->size++;
}

template <class T>
void LinkedList<T>::insertBeforeNode(const T &data, Node<T> *node) {
    if (size == 0) {
        return;
    }

    if(node == head){
        insertAtTheFront(data);
        return;
    }

    Node<T> *traveler = head;

    while (traveler) {
        if (traveler->next != node){
            continue;
        }

        Node<T>* newNode = new Node(data, traveler->prev, traveler);
        traveler->next = newNode;
        this->size++;

        break;
    }
}

template <class T>
void LinkedList<T>::deleteNode(Node<T> *node) {
    if (size == 0) {
        return;
    }

    if(node == head){
        Node<T>* tmp = head;
        delete head;
        head = tmp->next;
        head->prev = null;
        this->size--;
        return;
    }

    if(node == tail){
        Node<T>* tmp = tail;
        delete tail;
        tail = tmp->prev;
        tail->next = null;
        this->size--;
        return;
    }

    Node<T> *traveler = head;

    while (traveler) {
        if (traveler->next != node){
            continue;
        }

        Node<T>* newNode = new Node(data, traveler->prev, traveler);
        traveler->next = newNode;
        this->size++;

        break;
    }
}

template <class T>
void LinkedList<T>::deleteAllNodes() {
    /* TODO */
}

template <class T>
Node<T> * LinkedList<T>::getFirstNode() const {
    return this->head;
}

template <class T>
Node<T> * LinkedList<T>::getLastNode() const {
    return this->tail;
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
