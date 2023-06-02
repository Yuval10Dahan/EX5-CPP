#include <iostream>
#include <algorithm>
#include "MagicalContainer.hpp"



using namespace std;



// Constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : mContainer_(container) {}

// // default constructor
// SideCrossIterator::SideCrossIterator() : mContainer_(MagicalContainer()) {}

// copy constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : mContainer_(other.mContainer_) {}

// destructor
MagicalContainer::SideCrossIterator::~SideCrossIterator() {}

// getters
MagicalContainer MagicalContainer::SideCrossIterator::getMagicalContainer() const
{
    return this->mContainer_;
}

// operator= (Assignment operator)
MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
{
    return *this;
}

// operator == 
bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
{
    return false;
}

// operator !=
bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
{
    return false;
}

// operator >
bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
{
    return false;
}

// operator <
bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
{
    return false;
}

// operator* (Dereference operator)
int MagicalContainer::SideCrossIterator::operator*() const
{
    return 0;
}

// operator++ (prefix --> ++i)
MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++()
{
    return *this;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{
    return *this;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{
    return *this;
}