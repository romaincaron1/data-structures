/*
 * Node.h
 *
 * Created by Romain Caron on 27/04/2023.
 */

#include "Node.h"

namespace tree {
    Node::Node(int value) {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
} // tree