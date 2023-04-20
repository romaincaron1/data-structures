/*
 * DoublyLinkedList.h
 *
 * Created by Romain Caron on 20/04/2023.
 */

#ifndef DATA_STRUCTURES_DOUBLYLINKEDLIST_H
#define DATA_STRUCTURES_DOUBLYLINKEDLIST_H

#include <iostream>
#include "Node.h"

namespace doublylinkedlist {

    class DoublyLinkedList {
        private:
            Node* head;
            Node* tail;
            int length;

        public:
            explicit DoublyLinkedList(int value);
            void printList() const;
            void append(int value);
            void deleteLast();
            void prepend(int value);
            void deleteFirst();
            Node* get(int index);
            bool set(int index, int value);
            bool insert(int index, int value);
            void deleteNode(int index);
    };

} // doublylinkedlist

#endif //DATA_STRUCTURES_DOUBLYLINKEDLIST_H
