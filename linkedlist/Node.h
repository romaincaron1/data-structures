/*
 * Node.h
 *
 * Created by Romain Caron on 16/04/2023.
 */

#ifndef DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_NODE_H

namespace linkedlist {

    class Node {
        public:
            int value;
            Node *next{};

            Node(int value);
    };

} // linkedlist

#endif //DATA_STRUCTURES_NODE_H
