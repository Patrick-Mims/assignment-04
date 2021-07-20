/*
	LinkedBag340.cpp
	Created by: CSC340

    ===>					<===
    ===>  PLEASE ADD CODE	<===
    ===>					<===

    everything above this line is what the file started out as */

#include "LinkedBag.h"

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
int LinkedBag<ItemType>::getCurrentSize340Recursive() const {}

/* helper function */
template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340RecursiveHelper(Node<ItemType> *) const {}

/* counts the number of nodes in the Linked Bag recursively. 
   This recursive function does not use any helper functions */
template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340RecursiveNoHelper() const {}

/* recursively counts the number of times an entry appears in the Linked Bag. 
   Use 1 helper function: getFrequencyOf340Recursive */
template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340Recursive(const ItemType &anEntry) const
{
    int counter = 0, frequency = 0;
    /* Initially, curPtr */
    Node<ItemType> *curPtr = headPtr;

    while ((curPtr != nullptr) && (counter < itemCount))
    {
    }

    return counter;
}

/* helper function */
template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340RecursiveHelper(Node<ItemType> *, const ItemType &) const {}

/* recursively counts the number of times an entry appears in the Linked Bag.
    This recursive function does not use any helper functions */
template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340RecursiveNoHelper(const ItemType &) const {}

/* removes a random entry from the Linked Bag */
template <class ItemType>
ItemType LinkedBag<ItemType>::removeRandom340() {}

/*
template <class ItemType>
std::vector<ItemType> LinkedBag<ItemType>::toVector() const
{
    vector<ItemType> bagContents;
    Node<ItemType> *curPtr = headPtr;
    int counter = 0;
    while ((curPtr != nullptr) && (counter < itemCount))
    {
        bagContents.push_back(curPtr->getItem());
        curPtr = curPtr->getNext();
        counter++;
    }
    return bagContents;
}
*/