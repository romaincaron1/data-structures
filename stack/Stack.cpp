/*
 * Stack.cpp
 *
 * Created by Romain Caron on 20/04/2023.
 */

#include "Stack.h"

namespace stack {
    Stack::Stack(int value) {
        Node* newNode = new Node(value);
        top = newNode;
        height = 1;
    }

    void Stack::printStack() const {
        Node* temp = top;
        while (temp) {
            std::cout << temp->value << std::endl;
            temp = temp->next;
        }
    }

    void Stack::getTop() const {
        std::cout << this->top << std::endl;
    }

    void Stack::getHeight() const {
        std::cout << this->height << std::endl;
    }

    void Stack::push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top; // Node need to handle height==0 because top == nullptr anyway
        top = newNode;
        height++;
    }

    int Stack::pop() {
        if (height == 0) return INT_MIN;
        Node* temp = top;
        int poppedValue = top->value;
        top = top->next;
        delete temp;
        height--;
        return poppedValue;
    }
} // stack