#include <iostream>
#include <algorithm>
#include "MagicalContainer.hpp"



using namespace std;



// Constructor
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : mContainer_(container) {}

// // default constructor
// PrimeIterator::PrimeIterator() : mContainer_(MagicalContainer()) {}

// copy constructor
MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) : mContainer_(other.mContainer_) {}

// destructor
MagicalContainer::PrimeIterator::~PrimeIterator() {}

// getters
MagicalContainer MagicalContainer::PrimeIterator::getMagicalContainer() const
{
    return this->mContainer_;
}

// operator= (Assignment operator)
MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
{
    return *this;
}

// operator == 
bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
{
    return false;
}

// operator !=
bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
{
    return false;
}

// operator >
bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
{
    return false;
}

// operator <
bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
{
    return false;
}

// operator* (Dereference operator)
int MagicalContainer::PrimeIterator::operator*() const
{
    return 0;
}

// operator++ (prefix --> ++i)
MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++()
{
    return *this;
}


MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{
    return *this;
}


MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
    return *this;
}