#ifndef _INCLUDE_H
#define _INCLUDE_H

#include <iostream>
#include <vector>
#include "Node.h"

using namespace std;
template <class ItemType>
class Asmt : public Node<ItemType>
{
private:
public:
    void addEnd340();
    void removeRandom340();
    void removeSecondNode340();

    /* Current Size */
    void getCurrentSize340Iterative();
    void getCurrentSize340Recursive();
    void getCurrentSize340RecursiveHelper();
    void getCurrentSize340RecursiveNoHelper(); // Immediate Recursion

    /* Frequency */
    void getFrequencyOf340Recursive();
    void getFrequencyOf340RecursiveHelper();
    void getFrequencyOf340RecursiveNoHelper(); // Immediate Recursion
};

#endif