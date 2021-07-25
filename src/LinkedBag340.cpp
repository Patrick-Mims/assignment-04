#include "LinkedBag.h"
/*
#include "Node.h"
bool removeSecondNode340();
bool addEnd340(const ItemType &);
int getCurrentSize340Iterative() const;
int getCurrentSize340Recursive() const;
int getCurrentSize340RecursiveNoHelper() const;
int getFrequencyOf340Recursive(const ItemType &) const;
int getFrequencyOf340RecursiveNoHelper(const ItemType &) const;
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
bool LinkedBag<ItemType>::addEnd340(const ItemType &newEntry)
{
    Node<ItemType> *nextNodePtr = new Node<ItemType>();
    nextNodePtr->setItem(newEntry);
    //nextNodePtr->setNext(headPtr); // ...so the next pointer of the new node is set to nullptr. pg140
    headPtr = nextNodePtr;
    //itemCount++;
    return true;
}
/*
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

template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340Recursive(const ItemType &value) const
{
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
*/