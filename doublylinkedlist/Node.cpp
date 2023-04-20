/*
 * Node.cpp
 *
 * Created by Romain Caron on 20/04/2023.
 */

#include "Node.h"

namespace doublylinkedlist {
    Node::Node(int value) {
        this->value = value;
        next = nullptr;
        prev = nullptr;
    }
} // doublylinkedlist