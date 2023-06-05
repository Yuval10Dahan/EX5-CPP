#include <iostream>
#include <algorithm>
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
MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) : mContainer_(other.mContainer_) {}

// destructor
MagicalContainer::PrimeIterator::~PrimeIterator() {}

// ### getters ###


MagicalContainer& MagicalContainer::PrimeIterator::getMagicalContainer() const
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
    MagicalContainer *cAddress1 = &this->mContainer_;
    MagicalContainer *cAddress2 = &other.getMagicalContainer();

    size_t index1 = this->currIndex_;
    size_t index2 = other.getCurrIndex();

    vector<int> *pElements1 = &this->mContainer_.getPrimeElements();
    vector<int> *pElements2 = &other.getMagicalContainer().getPrimeElements();

    return ( (cAddress1 == cAddress2) && (index1 == index2) && (pElements1 == pElements2) );
}

// operator !=
bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
{
    return !(*this == other);
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
    return this->mContainer_.getPrimeElements().at(currIndex_);
}

// operator++ (prefix --> ++i)
MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++()
{
    this->currIndex_++;
    return *this;
}


MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{
    return PrimeIterator(mContainer_, ZERO);
}


MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
    size_t totalSize = mContainer_.getAscendingElements().size();
    
    return PrimeIterator(mContainer_, totalSize);
}