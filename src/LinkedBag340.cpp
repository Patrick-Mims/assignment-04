/*
	LinkedBag340.cpp
	Created by: CSC340

    ===>					<===
    ===>  PLEASE ADD CODE	<===
    ===>					<===

    everything above this line is what the file started out as */

#include "Include.h"

/* point to the headPtr */
template <class ItemType>
LinkedBag<ItemType>::LinkedBag() : headPtr(nullptr), itemCount(0) {}

template <typename ItemType>
bool removeSecondNode340()
{
    /*
    Node<ItemType> *entryNodePtr = getPointerTo(anEntry);
    bool canRemoveItem = !isEmpty() && (entryNodePtr != nullptr);
    if (canRemoveItem)
    {
        entryNodePtr->setItem(headPtr->getItem());
        Node<ItemType> *nodeToDeletePtr = headPtr;
        headPtr = headPtr->getNext();

        nodeToDeletePtr->setNext(nullptr);
        delete nodeToDeletePtr;
        nodeToDeletePtr = nullptr;

        itemCount--;
    }
    return canRemoveItem;
    */
}

template <class ItemType>
bool LinkedBag<ItemType>::addEnd340(const ItemType &newEntry)
{
    Node<ItemType> *newNodePtr = new Node<ItemType>();
    newNodePtr->setItem(newEntry);
    newNodePtr->setNext(headPtr);
    headPtr = newNodePtr;
    itemCount++;

    return true;
}

/* counts the number of nodes in the Linked Bag Iteratively */
template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340Iterative() const
{
    return itemCount;
}

/* counts the number of nodes in the Linked Bag recursively. 
   Use 1 helper function: getCurrentSize340RecursiveHelper() */
template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340Recursive() const
{

    int counter = 0, frequency = 0;
    /*  Initially, curPtr must point to the first node. 
        Because headPtr points to the first node, simply 
        copy headPtr into currPtr by writing */
    Node<ItemType> *curPtr = headPtr;

    while ((curPtr != nullptr) && (counter < itemCount))
    {
        /* ...advance the current pointer to the next node */
        curPtr = curPtr->getNext();
        counter += 1;
    }

    return counter;
}

/* helper function */
template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340RecursiveHelper(Node<ItemType> *element) const
{
}

/* counts the number of nodes in the Linked Bag recursively. 
   This recursive function does not use any helper functions */
template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340RecursiveNoHelper() const {}

/* recursively counts the number of times an entry appears in the Linked Bag. 
   Use 1 helper function: getFrequencyOf340RecursiveHelper */
template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340Recursive(const ItemType &value) const
{
    /*  Initially, curPtr must point to the first node. 
        Because headPtr points to the first node, simply 
        copy headPtr into currPtr by writing */

    //curPtr = curPtr->getNext();
    // keep calling getCurrentSize340RecursiveHelper();
    /*
    if (anEntry == curPtr->getItem())
    {
        frequency++;
    }
    else
    {
        frequency = getFrequencyOf340RecursiveHelper(curPtr);
    }

    counter++;
    */
    int frequency = 0;

    Node<ItemType> *curPtr = headPtr;

    if (curPtr == nullptr)
    {
        return frequency;
    }
    else
    {
        frequency = getFrequencyOf340RecursiveHelper(curPtr, value);
    }

    return frequency;
}

/* helper function */
template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340RecursiveHelper(Node<ItemType> *node, const ItemType &theItem) const
{
    cout << "Get Current Size 340 Recursive Helper: " << endl;

    static int count = 0;

    if (node->getItem() == theItem)
    {
        count++;
    }

    return count;
}

/* recursively counts the number of times an entry appears in the Linked Bag.
    This recursive function does not use any helper functions */
template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340RecursiveNoHelper(const ItemType &entry) const
{
    /*  Initially, curPtr must point to the first node. 
        Because headPtr points to the first node, simply 
        copy headPtr into currentPtr by writing */
    Node<ItemType> *currentPtr = headPtr;

    /*
    while ((currentPtr != nullptr) && (counter < itemCount))
    {
    }
    */
}

/* removes a random entry from the Linked Bag */
template <class ItemType>
ItemType LinkedBag<ItemType>::removeRandom340() {}