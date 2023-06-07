#include <iostream>
#include <algorithm>
#include <cmath>
#include "MagicalContainer.hpp"



#define ZERO 0

using namespace std;



// Constructor
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : mContainer_(container), currIndex_(ZERO) {}

// 2 params constructor
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container, size_t index) : mContainer_(container), currIndex_(index) {}

// // default constructor
// PrimeIterator::PrimeIterator() : mContainer_(MagicalContainer()) {}

// copy constructor
MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator& other) : mContainer_(other.mContainer_), currIndex_(other.currIndex_) {}

// destructor
MagicalContainer::PrimeIterator::~PrimeIterator() {}




// --------------------------
// ### getters ###
// --------------------------

const MagicalContainer& MagicalContainer::PrimeIterator::getMagicalContainer() const
{
    return this->mContainer_;
}

size_t MagicalContainer::PrimeIterator::getCurrIndex() const
{
    return this->currIndex_;
}

 


// operator= (Assignment operator)
MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
{
    // if the iterators are not pointing to the same containers - throw an exception
    if( &this->mContainer_ != &other.getMagicalContainer() )
    {
        throw runtime_error("Iterators are not pointing to the same containers\n");
    }

    // in case that other is actually this
    if (this == &other) 
    {
        return *this;
    }

    // copy the data members otherwise
    this->mContainer_ = other.getMagicalContainer();
    this->currIndex_ = other.getCurrIndex();

    // return the object after the changes
    return *this;
}

// operator == 
bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
{
    const MagicalContainer *cAddress1 = &this->mContainer_;
    const MagicalContainer *cAddress2 = &other.getMagicalContainer();

    size_t index1 = this->currIndex_;
    size_t index2 = other.getCurrIndex();

    return ( (cAddress1 == cAddress2) && (index1 == index2) );
}

// operator !=
bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
{
    return !(*this == other);
}

// operator >
bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
{
    return (this->currIndex_ > other.getCurrIndex());
}

// operator <
bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
{
    return (this->currIndex_ < other.getCurrIndex());
}

// operator* (Dereference operator)
int MagicalContainer::PrimeIterator::operator*() const
{
    // the pointer to the current element in the vector that holds 
    // the addresses of the prime numbers in the container
    int *element = mContainer_.getPointerVector().at(currIndex_);

    // dereference the pointer to get the element itself
    return *element; 
}

// operator++ (prefix --> ++i)
MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++()
{
    if(currIndex_ >= mContainer_.getPointerVector().size())
    {
        throw runtime_error("Increment beyond the end\n");
    }

    // increment the index by 1
    this->currIndex_++;

    return *this; 
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{
    return PrimeIterator(mContainer_);
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
    size_t size = this->mContainer_.getPointerVector().size();

    return PrimeIterator(mContainer_, size);
}