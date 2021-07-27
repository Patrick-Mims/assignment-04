#include "Node.h"
#include "LinkedBag.h"
#include <iostream>

using namespace std;

template <typename ItemType>
bool LinkedBag<ItemType>::removeSecondNode340()
{
    static int counter = 0;

    Node<ItemType> *curPtr = headPtr;

    while ((curPtr != nullptr) && (counter < itemCount))
    {
        cout << curPtr->getItem();

        if (counter == 1)
        {
            remove(curPtr->getItem());
        }
        else
        {
            curPtr = curPtr->getNext();
        }
        counter++;
    }
    /*
    bool canRemoveItem = isEmpty(); // false
    cout << "canRemoveItem: " << canRemoveItem << endl;
    */
    /*
    Node<ItemType> *entryNodePtr = getPointerTo(anEntry);
    bool canRemoveItem = !isEmpty() && (entryNodePtr != nullptr);
    */

    /*
    if (canRemoveItem)
    {
        cout << "Removing a Node..." << endl;
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
