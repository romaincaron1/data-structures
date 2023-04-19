/*
 * Node.cpp
 *
 * Created by Romain Caron on 16/04/2023.
 */

#include "Node.h"

namespace linkedlist {
    Node::Node(int value) {
        this->value = value;
        next = nullptr;
    }
} // linkedlist