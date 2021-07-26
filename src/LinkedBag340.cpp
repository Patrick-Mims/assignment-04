#include "Node.h"
#include "LinkedBag.h"
#include <iostream>

using namespace std;
/*
#include "Node.h"
bool removeSecondNode340();
bool addEnd340(const ItemType &);
int getCurrentSize340Iterative() const;
int getCurrentSize340Recursive() const;
int getCurrentSize340RecursiveNoHelper() const;

int getFrequencyOf340Recursive(const ItemType &) const;
int getFrequencyOf340RecursiveNoHelper(const ItemType &) const;
int getCurrentSize340RecursiveNoHelper() const;
ItemType removeRandom340();
*/

/*
template <typename ItemType>
LinkedBag<ItemType>::Linkedbag() : headPtr(nullptr), itemCount(0) {}
*/
/*
template <typename ItemType>
LinkedBag<ItemType>::LinkedBag() : headPtr(nullptr), itemCount(0) {}

template <typename ItemType>
LinkedBag<ItemType>::LinkedBag(const LinkedBag<ItemType> &aBag)
{
    itemCount = aBag.itemCount;
    Node<ItemType> *origChainPtr = aBag.headPtr;

    if (origChainPtr == nullptr)
    {
        headPtr = nullptr;
    }
    else
    {
        headPtr = new Node<ItemType>();
        headPtr->setItem(origChainPtr->getItem());

        Node<ItemType> *newChainPtr = headPtr;
        origChainPtr = origChainPtr->getNext();

        while (origChainPtr != nullptr)
        {
            ItemType nextItem = origChainPtr->getItem();
            Node<ItemType> *newNodePtr = new Node<ItemType>(nextItem);
            newChainPtr->setNext(newNodePtr);
            newChainPtr = newChainPtr->getNext();
            origChainPtr = origChainPtr->getNext();
        }

        newChainPtr->setNext(nullptr);
    }
}
*/
template <typename ItemType>
bool LinkedBag<ItemType>::removeSecondNode340()
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

template <typename ItemType>
bool LinkedBag<ItemType>::addEnd340(const ItemType &newEntry)
{
    Node<ItemType> *nextNodePtr = new Node<ItemType>();
    nextNodePtr->setItem(newEntry);
    //nextNodePtr->setNext(headPtr); // ...so the next pointer of the new node is set to nullptr. pg140
    headPtr = nextNodePtr;
    //itemCount++;
    return true;
}

template <typename ItemType>
ItemType LinkedBag<ItemType>::removeRandom340()
{
}

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340Iterative() const
{
    cout << "getCurrentSize340Iterative()" << endl;
}

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340Recursive() const
{
}

/*

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340RecursiveNoHelper() const
{
    cout << "getCurrentSize340RecursiveNoHelper()" << endl;
}

template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340Recursive(const ItemType &) const
{
    cout << "getFrequencyOf340Recursive()" << endl;
}
*/

/*
int getCurrentSize340Recursive() const;
int getFrequencyOf340RecursiveNoHelper(const ItemType &) const;
*/

template <class ItemType>
int getFrequencyOf340RecursiveNoHelper(const ItemType &theItem)
{
    cout << "Get Current Size 340 Recursive Helper: " << endl;
    static int count = 0;

    /*
    if (node->getItem() == theItem)
    {
        count++;
    }
    */

    return count;
}

template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340Recursive(const ItemType &value) const
{
    /*
    int frequency = 0;

    Node<ItemType> *curPtr = headPtr;

    if (curPtr == nullptr)
    {
        return frequency;
    }
    else
    {
        frequency = getFrequencyOf340RecursiveNoHelper(curPtr);
    }

    return frequency;
   */
}

template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340RecursiveNoHelper(const ItemType &) const
{
}

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340RecursiveNoHelper() const
{
}
