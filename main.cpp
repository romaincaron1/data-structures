#include <iostream>
#include "linkedlist/LinkedList.h"

int main() {
    linkedlist::LinkedList* myLinkedList = new linkedlist::LinkedList(5);
    myLinkedList->append(10);
    myLinkedList->append(15);
    myLinkedList->insert(1, 20);
    myLinkedList->printList();
    myLinkedList->reverse();
    std::cout << std::endl;
    myLinkedList->printList();
    return 0;
}
