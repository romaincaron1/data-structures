//
// Created by Romain Caron on 27/04/2023.
//

#include "BinarySearchTree.h"

namespace tree {
    BinarySearchTree::BinarySearchTree() {
        root = nullptr;
    }

    BinarySearchTree::BinarySearchTree(int value) {
        Node* newNode = new Node(value);
        root = newNode;
    }

    bool BinarySearchTree::insert(int value) {
        Node* newNode = new Node(value);
        if (root == nullptr) {
            root = newNode;
            return true;
        }
        Node* temp = root;
        while(true) {
            if (newNode->value == temp->value) return false;
            if (newNode->value < temp->value) {
                if (temp->left == nullptr) {
                    temp->left = newNode;
                    return true;
                }
                temp = temp->left;
            } else {
                if (temp->right == nullptr) {
                    temp->right = newNode;
                    return true;
                }
                temp = temp->right;
            }
        }
    }

    bool BinarySearchTree::contains(int value) {
        if (root == nullptr) return false;
        Node* temp = root;
        while(temp) {
            if (value < temp->value) {
                temp = temp->left;
            } else if (value > temp->value) {
                temp = temp->right;
            } else {
                return true;
            }
        }
        return false;
    }

} // tree
