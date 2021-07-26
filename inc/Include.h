
#pragma once

#include "Node.h"
#include <memory>
#include <iostream>
#include <vector>
#include <utility>
#include "../src/LinkedBag.cpp"
#include "../src/LinkedBag340.cpp"

using namespace std;

/*
template <class ItemType>
class Helper : public LinkedBag<ItemType>
{
public:
    Helper();
    Helper(const ItemType &, Node<ItemType> *);
    bool addEnd340(const ItemType &);

private:
    int getCurrentSize340RecursiveHelper(Node<ItemType> *) const;                   // if needed
    int getFrequencyOf340RecursiveHelper(Node<ItemType> *, const ItemType &) const; // if needed
    Node<ItemType> *headPtr{nullptr};                                               // Pointer to first node
    int itemCount{0};                                                               // Current count of bag items
};
*/