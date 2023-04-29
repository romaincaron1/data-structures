//
// Created by Romain Caron on 27/04/2023.
//

#ifndef DATA_STRUCTURES_BINARYSEARCHTREE_H
#define DATA_STRUCTURES_BINARYSEARCHTREE_H

#include "Node.h"

namespace tree {

    class BinarySearchTree {
        public:
            Node* root;
            BinarySearchTree();
            BinarySearchTree(int value);
            bool insert(int value);
            bool contains(int value);
    };

} // tree

#endif //DATA_STRUCTURES_BINARYSEARCHTREE_H
