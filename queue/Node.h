/*
 * Node.h
 *
 * Created by Romain Caron on 25/04/2023.
 */

#ifndef DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_NODE_H

namespace queue {

    class Node {
        public:
            int value;
            Node* next;

            Node(int value);
    };

} // queue

#endif //DATA_STRUCTURES_NODE_H
