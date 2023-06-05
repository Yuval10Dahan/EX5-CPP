#include <iostream>
#include <algorithm>
#include "MagicalContainer.hpp"



#define ZERO 0


using namespace std;



// constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : mContainer_(container), currIndex_(ZERO) {}

// 2 params constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container, size_t index) : mContainer_(container), currIndex_(index) {}

// // default constructor
// AscendingIterator::AscendingIterator() : mContainer_(MagicalContainer()) {}

// copy constructor
MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : mContainer_(other.mContainer_),
currIndex_(other.getCurrIndex()) {}

// destructor
MagicalContainer::AscendingIterator::~AscendingIterator() {}

// ### getters ###


MagicalContainer& MagicalContainer::AscendingIterator::getMagicalContainer() const
{
    return this->mContainer_;
}

size_t MagicalContainer::AscendingIterator::getCurrIndex() const
{
    return this->currIndex_;
}

// operator= (Assignment operator)
MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
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
bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
{
    MagicalContainer *cAddress1 = &this->mContainer_;
    MagicalContainer *cAddress2 = &other.getMagicalContainer();

    size_t index1 = this->currIndex_;
    size_t index2 = other.getCurrIndex();

    vector<int> *aElements1 = &this->mContainer_.getAscendingElements();
    vector<int> *aElements2 = &other.getMagicalContainer().getAscendingElements();

    return ( (cAddress1 == cAddress2) && (index1 == index2) && (aElements1 == aElements2) );
}

// operator !=
bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
{
    return !(*this == other);
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
    return this->mContainer_.getAscendingElements().at(currIndex_);
}

// operator++ (prefix --> ++i)
MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++()
{
    this->currIndex_++;
    return *this; 
}


MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{
    return AscendingIterator(mContainer_, ZERO);
}


MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{
    size_t totalSize = mContainer_.getAscendingElements().size();

    return AscendingIterator(mContainer_, totalSize);
}