/*
 * HashTable.h
 *
 * Created by Romain Caron on 29/04/2023.
 */

#ifndef DATA_STRUCTURES_HASHTABLE_H
#define DATA_STRUCTURES_HASHTABLE_H

#include <iostream>
#include <vector>
#include "Node.h"

using namespace std;

namespace hashtable {

    class HashTable {
        private:
            static const int SIZE = 7;
            Node* dataMap[SIZE];

        public:
            void printTable();
            int hash(string key);
            void set(string key, int value);
            int get(string key);
            vector<string> keys();
    };

} // hashtable

#endif //DATA_STRUCTURES_HASHTABLE_H
