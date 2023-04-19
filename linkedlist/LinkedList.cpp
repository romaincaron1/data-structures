/*
 * LinkedList.cpp
 *
 * Created by Romain Caron on 16/04/2023.
 */

#include "LinkedList.h"

namespace linkedlist {
    LinkedList::LinkedList(int value) {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    LinkedList::~LinkedList() {
        Node *temp = head;
        while (temp) {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
    }

    void LinkedList::printList() const {
        Node *temp = head;
        while (temp) {
            std::cout << temp->value << " ";
            temp = temp->next;
        }
    }

    void LinkedList::getHead() const {
        std::cout << head->value << std::endl;
    }

    void LinkedList::getTail() const {
        std::cout << tail->value << std::endl;
    }

    void LinkedList::getLength() const {
        std::cout << length << std::endl;
    }

    void LinkedList::append(int value) {
        Node *newNode = new Node(value);
        if (length == 0) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    // This version is optimal for small lists
    void LinkedList::deleteLast() {
        if (length == 0) {
            return;
        }

        if (length == 1) {
            head = nullptr;
            tail = nullptr;
            length--;
        } else if (length > 1) {
            Node *temp = head;
            while (temp) {
                if (temp->next == tail) {
                    tail = temp;
                    temp->next = nullptr;
                    break;
                } else {
                    temp = temp->next;
                }
            }
            length--;
        }
    }

    void LinkedList::prepend(int value) {
        Node *newNode = new Node(value);
        if (length == 0) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        length++;

    }

    void LinkedList::deleteFirst() {
        if (length == 0) {
            return;
        }

        if (length == 1) {
            head = nullptr;
            tail = nullptr;
            length--;
        } else if (length > 1) {
            Node *temp = head;
            head = head->next;
            delete temp;
            length--;
        }

    }

    Node *LinkedList::get(int index) {
        if (index < 0 || index >= length) {
            return nullptr;
        }

        Node *temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
        return temp;
    }

    bool LinkedList::set(int index, int value) {
        Node* temp = get(index);
        if (temp) {
            temp->value = value;
            return true;
        }
        return false;
    }

    bool LinkedList::insert(int index, int value) {
        if (index < 0 || index > length) {
            return false;
        }

        if (index == 0) {
            prepend(value);
        } else if (index == length) {
            append(value);
        } else {
            Node *newNode = new Node(value);
            Node *temp = get(index - 1);
            newNode->next = temp->next;
            temp->next = newNode;
            length++;
        }
        return true;
    }

    void LinkedList::deleteNode(int index) {
        if (index == 0) return deleteFirst();

        if (index == length - 1) return deleteLast();

        Node* prev = get(index - 1);
        Node* temp = prev->next;
        prev->next = temp->next;
        delete temp;
        length--;
    }

    void LinkedList::reverse() {
        Node* temp = head;
        head = tail;
        tail = temp;

        Node* after = temp->next;
        Node* before = nullptr;

        for (int i = 0; i < length; i++) {
            after = temp->next;
            temp->next = before;
            before = temp;
            temp = after;
        }
    }
} // linkedlist











