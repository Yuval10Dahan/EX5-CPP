#include <iostream>
#include <algorithm>
#include "MagicalContainer.hpp"



using namespace std;


// constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : mContainer_(container) {}

// // default constructor
// AscendingIterator::AscendingIterator() : mContainer_(MagicalContainer()) {}

// copy constructor
MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : mContainer_(other.mContainer_) {}

// destructor
MagicalContainer::AscendingIterator::~AscendingIterator() {}

// getters
MagicalContainer MagicalContainer::AscendingIterator::getMagicalContainer() const
{
    return this->mContainer_;
}

// operator= (Assignment operator)
MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
{
    return *this;
}

// operator == 
bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
{
    return false;
}

// operator !=
bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
{
    return false;
}

// operator >
bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
{
    return false;
}

// operator <
bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
{
    return false;
}

// operator* (Dereference operator)
int MagicalContainer::AscendingIterator::operator*() const
{
    return 0;
}

// operator++ (prefix --> ++i)
MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++()
{
    return *this;
}


MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{
    return *this;
}


MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{
    return *this;
}