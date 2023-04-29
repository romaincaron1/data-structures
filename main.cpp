#include <iostream>
#include "hashtable/HashTable.h"

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

    /*auto *myQueue = new queue::Queue(2);
    myQueue->enqueue(3);
    myQueue->printQueue();*/

/*    auto* myBST = new tree::BinarySearchTree();
    myBST->insert(47);
    myBST->insert(21);
    myBST->insert(76);
    myBST->insert(18);
    myBST->insert(52);
    myBST->insert(82);

    myBST->insert(27);

    std::cout << myBST->root->left->right->value << std::endl;
    std::cout << myBST->contains(18) << std::endl;
    std::cout << myBST->contains(123);*/

    auto* myHashTable = new hashtable::HashTable();
    myHashTable->set("nails", 100);
    myHashTable->set("tile", 50);
    myHashTable->set("lumber", 80);

    myHashTable->set("bolts", 200);

    myHashTable->printTable();

    std::cout << myHashTable->get("bolts") << std::endl;
    std::cout << myHashTable->get("bceazceaz") << std::endl;

    vector<string> myKeys = myHashTable->keys();

    for (auto key : myKeys) {
        cout << key << " ";
    }

    return 0;
}
