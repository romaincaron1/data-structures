/*
 * Queue.cpp
 *
 * Created by Romain Caron on 25/04/2023.
 */

#include "Queue.h"

namespace queue {

    Queue::Queue(int value) {
        Node* newNode = new Node(value);
        first = newNode;
        last = newNode;
        length = 1;
    }

    void Queue::printQueue() const {
        Node* temp = first;
        while(temp) {
            std::cout << temp->value << " ";
            temp = temp->next;
        }
    }

    void Queue::getFirst() const {
        std::cout << this->first;
    }

    void Queue::getLast() const {
        std::cout << this->last;
    }

    void Queue::getLength() const {
        std::cout << this->length;
    }

    void Queue::enqueue(int value) {
        Node* newNode = new Node(value);
        if (length == 0) {
            first = newNode;
            last = newNode;
        } else {
            last->next = newNode;
            last = newNode;
        }
        length++;
    }

    int Queue::dequeue() {
        if (length == 0) return INT_MIN;
        Node* temp = first;
        int dequeuedValue = first->value;
        if (length == 1) {
            first = nullptr;
            last = nullptr;
        } else {
            first = first->next;
        }
        delete temp;
        length--;
        return dequeuedValue;
    }
}