/*
 * Node.cpp
 *
 * Created by Romain Caron on 29/04/2023.
 */

#include "Node.h"

namespace hashtable {
    Node::Node(std::string key, int value) {
        this->key = key;
        this->value = value;
        next = nullptr;
    }
} // hashtable