#include <iostream>
#include <algorithm>
#include "MagicalContainer.hpp"



#define ZERO 0


using namespace std;



// Constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : mContainer_(container), currIndex_(ZERO) {}

// 2 params constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container, size_t index) : mContainer_(container), currIndex_(index) {}

// // default constructor
// SideCrossIterator::SideCrossIterator() : mContainer_(MagicalContainer()) {}

// copy constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : mContainer_(other.mContainer_) {}

// destructor
MagicalContainer::SideCrossIterator::~SideCrossIterator() {}

// getters
MagicalContainer& MagicalContainer::SideCrossIterator::getMagicalContainer() const
{
    return this->mContainer_;
}

size_t MagicalContainer::SideCrossIterator::getCurrIndex() const
{
    return this->currIndex_;
}

// operator= (Assignment operator)
MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
{
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
bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
{
    MagicalContainer *cAddress1 = &this->mContainer_;
    MagicalContainer *cAddress2 = &other.getMagicalContainer();

    size_t index1 = this->currIndex_;
    size_t index2 = other.getCurrIndex();

    vector<int> *sElements1 = &this->mContainer_.getSideCrossElements();
    vector<int> *sElements2 = &other.getMagicalContainer().getSideCrossElements();

    return ( (cAddress1 == cAddress2) && (index1 == index2) && (sElements1 == sElements2) );
}

// operator !=
bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
{
    return !(*this == other);
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
    return this->mContainer_.getSideCrossElements().at(currIndex_);
}

// operator++ (prefix --> ++i)
MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++()
{
    this->currIndex_++;
    return *this;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{
    return SideCrossIterator(mContainer_, ZERO);
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{
    size_t totalSize = mContainer_.getAscendingElements().size();
    
    return SideCrossIterator(mContainer_, totalSize);
}