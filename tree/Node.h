/*
 * Node.h
 *
 * Created by Romain Caron on 27/04/2023.
 */

#ifndef DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_NODE_H

namespace tree {

    class Node {
        public:
            int value;
            Node* left;
            Node* right;

            explicit Node(int value);
    };

} // tree

#endif //DATA_STRUCTURES_NODE_H
