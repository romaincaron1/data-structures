/*
 * HashTable.cpp
 *
 * Created by Romain Caron on 29/04/2023.
 */

#include "HashTable.h"

namespace hashtable {
    void HashTable::printTable() {
        for (int i = 0; i < SIZE; i++) {
            cout << i << ":" << endl;
            if (dataMap[i]) {
                Node* temp = dataMap[i];
                while (temp) {
                    cout << " {" << temp->key << ", " << temp->value << "}" << endl;
                    temp = temp->next;
                }
            }
        }
    }

    int HashTable::hash(string key) {
        int hash = 0;
        for (int i = 0; i < key.length(); i++) {
            int asciiValue = int(key[i]);
            hash = (hash + asciiValue * 23) % SIZE;
        }
        return hash;
    }

    void HashTable::set(string key, int value) {
        int index = hash(key);
        Node* newNode = new Node(key, value);
        if (dataMap[index] == nullptr) {
            dataMap[index] = newNode;
        } else {
            Node* temp = dataMap[index];
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    int HashTable::get(string key) {
        int index = hash(key);
        Node* temp = dataMap[index];
        while (temp) {
            if (temp->key == key) return temp->value;
            temp = temp->next;
        }
        return 0;
    }

    vector<string> HashTable::keys() {
        vector<string> allKeys;
        for(int i = 0; i < SIZE; i++) {
            Node* temp = dataMap[i];
            while (temp != nullptr) {
                allKeys.push_back(temp->key);
                temp = temp->next;
            }
        }
        return allKeys;
    }
} // hashtable