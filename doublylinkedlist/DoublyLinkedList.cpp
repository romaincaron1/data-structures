/*
 * DoublyLinkedList.cpp
 *
 * Created by Romain Caron on 20/04/2023.
 */

#include "DoublyLinkedList.h"

namespace doublylinkedlist {
    DoublyLinkedList::DoublyLinkedList(int value) {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    void DoublyLinkedList::printList() const {
        Node *temp = head;
        while (temp) {
            std::cout << temp->value << " ";
            temp = temp->next;
        }
    }

    void DoublyLinkedList::append(int value) {
        Node* newNode = new Node(value);

        if (length == 0) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        length++;
    }

    void DoublyLinkedList::deleteLast() {
        if (length == 0 ) return;

        Node* temp = tail;
        if (length == 1) {
            head = nullptr;
            tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
        length--;
    }

    void DoublyLinkedList::prepend(int value) {
        Node* newNode = new Node(value);
        if (length == 0) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        length++;
    }

    void DoublyLinkedList::deleteFirst() {
        if (length == 0) return;

        Node* temp = head;
        if (length == 1) {
            head = nullptr;
            tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
        length--;
    }

    Node *DoublyLinkedList::get(int index) {
        if (index < 0 || index >= length) return nullptr;

        Node* temp = head;
        if (index < length/2) {
            for (int i = 0; i < index; i++) {
                temp = temp->next;
            }
        } else {
            temp = tail;
            for (int i = length - 1; i > index; i--) {
                temp = temp->prev;
            }
        }
        return temp;
    }

    bool DoublyLinkedList::set(int index, int value) {
        Node* temp = get(index);
        if (temp) {
            temp->value = value;
            return true;
        } else {
            return false;
        }
    }

    bool DoublyLinkedList::insert(int index, int value) {
        if (index < 0 || index >= length) return false;

        if (index == 0) {
            prepend(value);
            return true;
        }
        if (index == length) {
            append(value);
            return true;
        }
        Node* newNode = new Node(value);
        Node* before = get(index - 1);
        Node* after(before->next); // Use before->next instead of get because get is O(n)

        newNode->prev = before;
        newNode->next = after;
        before->next = newNode;
        after->prev = newNode;
        length++;
    }

    void DoublyLinkedList::deleteNode(int index) {
        if (index < 0 || index >= length) return;
        if (index == 0) return deleteFirst();
        if (index == length - 1) return deleteLast();

        Node* temp = get(index);
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        delete temp;
        length--;
    }
} // doublylinkedlist