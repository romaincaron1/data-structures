/*
 * Node.h
 *
 * Created by Romain Caron on 20/04/2023.
 */

#ifndef DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_NODE_H

namespace stack {

    class Node {
        public:
            int value;
            Node* next;

            explicit Node(int value);
    };

} // stack

#endif //DATA_STRUCTURES_NODE_H
