/*
 * Queue.h
 *
 * Created by Romain Caron on 25/04/2023.
 */

#ifndef DATA_STRUCTURES_QUEUE_H
#define DATA_STRUCTURES_QUEUE_H

#include "Node.h"
#include <iostream>

namespace queue {

    class Queue {
        private:
            Node* first;
            Node* last;
            int length;

        public:
            explicit Queue(int value);
            void printQueue() const;
            void getFirst() const;
            void getLast() const;
            void getLength() const;
            void enqueue(int value);
            int dequeue();
    };

}

#endif //DATA_STRUCTURES_QUEUE_H
