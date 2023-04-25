/*
 * Node.cpp
 *
 * Created by Romain Caron on 20/04/2023.
 */

#include "Node.h"

namespace stack {
    Node::Node(int value) {
        this->value = value;
        this->next = nullptr;
    }
} // stack