#include <iostream>
#include "queue/Node.h"
#include "queue/Queue.h"

int main() {
/*    auto* myLinkedList = new linkedlist::LinkedList(5);
    myLinkedList->append(10);
    myLinkedList->append(15);
    myLinkedList->insert(1, 20);
    myLinkedList->printList();
    myLinkedList->reverse();
    std::cout << std::endl;
    myLinkedList->printList();*/

/*    auto* myDoublyLinkedList = new doublylinkedlist::DoublyLinkedList(5);
    myDoublyLinkedList->append(10);
    myDoublyLinkedList->deleteLast();
    myDoublyLinkedList->append(15);
    myDoublyLinkedList->append(20);
    myDoublyLinkedList->insert(1, 10);
    myDoublyLinkedList->deleteNode(1);
    myDoublyLinkedList->printList();*/

/*    auto* myStack = new stack::Stack(5);
    myStack->push(2);
    std::cout << myStack->pop();
    std::cout << myStack->pop();
    myStack->printStack();*/

    auto* myQueue = new queue::Queue(2);
    myQueue->enqueue(3);
    myQueue->printQueue();

    return 0;
}
