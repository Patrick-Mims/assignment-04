#include "Node.h"
#include "LinkedBag.h"
#include <iostream>
#include <ctime>

using namespace std;

template <typename ItemType>
bool LinkedBag<ItemType>::removeSecondNode340()
{
    static int i = 0;

    Node<ItemType> *curPtr = headPtr;

    while ((curPtr != nullptr) && (i < itemCount))
    {
        if (i == 1)
        {
            remove(curPtr->getItem());
        }
        else
        {
            curPtr = curPtr->getNext();
        }
        i++;
    }

    return 1;
}

template <typename ItemType>
bool LinkedBag<ItemType>::addEnd340(const ItemType &newEntry)
{
    int i = 0;
    Node<ItemType> *curPtr = headPtr;

    while ((curPtr != nullptr) && (i <= itemCount))
    {
        if (i == itemCount - 1)
        {
            add(newEntry);
            return 1;
        }
        else
        {
            curPtr = curPtr->getNext();
        }
        i++;
    }

    return 0;
}

template <typename ItemType>
ItemType LinkedBag<ItemType>::removeRandom340()
{
    Node<ItemType> *curPtr = headPtr;

    int cnt = 0;

    ItemType itemRemoved;
    static int randomItem;

    srand(time(NULL));
    randomItem = rand() % itemCount;

    while ((curPtr != nullptr) && (cnt <= itemCount))
    {
        if (cnt == randomItem)
        {
            itemRemoved = curPtr->getItem();
            remove(curPtr->getItem());
        }
        else
        {
            curPtr = curPtr->getNext();
        }
        cnt++;
    }
    return itemRemoved;
}

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340Iterative() const
{
    int count = 0;
    vector<ItemType> bag = toVector();
    vector<string>::iterator it;
    for (it = bag.begin(); it != bag.end(); ++it)
    {
        count++;
    }
    return count;
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
