//  LinkedBag.h
//  Created by Frank M. Carrano and Timothy M. Henry.
//  Updated by Duc Ta
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

#pragma once
/* This line is throwing an error, I'm going to comment out line 8 
#include "Node.cpp"
*/
#include "BagInterface.h"

/* PMIMS: this wasnt's originally in here, it's in the book - so I added it. */
#include "Node.h"

//
//
// PLEASE DO NOT CHANGE THIS FILE
//
//

//template <typename ItemType>
template <class ItemType>
class LinkedBag : public BagInterface<ItemType>
{

	/*--------------------------CSC340-------------------------------------*/
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
																					/*----------------------------------------------------------------------*/

public:
	LinkedBag();
	LinkedBag(const LinkedBag<ItemType> &);
	virtual ~LinkedBag();
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const ItemType &);
	bool remove(const ItemType &);
	void clear();
	bool contains(const ItemType &) const;
	int getFrequencyOf(const ItemType &) const;
	std::vector<ItemType> toVector() const;

private:
	Node<ItemType> *headPtr{nullptr}; // Pointer to first node
	int itemCount{0};				  // Current count of bag items

	// pointer to the node or the null pointer
	Node<ItemType> *getPointerTo(const ItemType &) const;
};
/* pmims */
#include "../src/Node.cpp"