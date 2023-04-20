/*
 * Node.h
 *
 * Created by Romain Caron on 20/04/2023.
 */

#ifndef DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_NODE_H

namespace doublylinkedlist {

    class Node {
        public:
            int value;
            Node* next{};
            Node* prev{};

            explicit Node(int value);
    };

} // doublylinkedlist

#endif //DATA_STRUCTURES_NODE_H
