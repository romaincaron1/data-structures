/*
 * Node.cpp
 *
 * Created by Romain Caron on 25/04/2023.
 */

#include "Node.h"

namespace queue {
    Node::Node(int value) {
        this->value = value;
        this->next = nullptr;
    }
} // queue