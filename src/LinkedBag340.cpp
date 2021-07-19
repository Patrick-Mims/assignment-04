#include "LinkedBag.h"
//	LinkedBag340.cpp
//	Created by: CSC340

/*
===>					<===
===>  PLEASE ADD CODE	<===
===>					<===
*/

template <class ItemType>
LinkedBag<ItemType>::LinkedBag() : headPtr(nullptr), itemCount(0)
{
}

template <class ItemType>
bool removeSecondNode340();
{
}

template <class ItemType>
bool LinkedBag<ItemType>::addEnd340(const ItemType &)
{
    Node<ItemType> *newNodePtr = new Node<ItemType>();
    newNodePtr->setItem(newEntry);
    newNodePtr->setNext(headPtr);
    headPtr = newNodePtr;
}

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340Iterative() const
{
}

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340Recursive() const
{
}

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340RecursiveNoHelper() const;
{
}

template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340Recursive(const ItemType &) const
{
}

template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340RecursiveNoHelper(const ItemType &) const
{
}

template <class ItemType>
ItemType LinkedBag<ItemType>::removeRandom340()
{
}

/*
    LinkedBag340 is going to be the implementation file for LinkedBag.h

    public:
        bool removeSecondNode340();
        bool addEnd340(const ItemType &);
        int getCurrentSize340Iterative() const;
        int getCurrentSize340Recursive() const;
        int getCurrentSize340RecursiveNoHelper() const;
        int getFrequencyOf340Recursive(const ItemType &) const;
        int getFrequencyOf340RecursiveNoHelper(const ItemType &) const;
        ItemType removeRandom340();

    private:
        int getCurrentSize340RecursiveHelper(Node<ItemType> *) const;					// if needed
        int getFrequencyOf340RecursiveHelper(Node<ItemType> *, const ItemType &) const; // if needed
*/
