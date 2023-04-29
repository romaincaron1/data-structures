/*
 * Node.h
 *
 * Created by Romain Caron on 29/04/2023.
 */

#ifndef DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_NODE_H

#include <string>

namespace hashtable {

    class Node {
        public:
            std::string key;
            int value;
            Node* next;

            Node(std::string key, int value);
    };

} // hashtable

#endif //DATA_STRUCTURES_NODE_H
