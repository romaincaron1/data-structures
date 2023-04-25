/*
 * Stack.h
 *
 * Created by Romain Caron on 20/04/2023.
 */

#ifndef DATA_STRUCTURES_STACK_H
#define DATA_STRUCTURES_STACK_H

#include "Node.h"
#include <iostream>

namespace stack {

    class Stack {
        private:
            Node* top;
            int height;

        public:
            explicit Stack(int value);
            void printStack() const;
            void getTop() const;
            void getHeight() const;
            void push(int value);
            int pop();
    };

} // stack

#endif //DATA_STRUCTURES_STACK_H
