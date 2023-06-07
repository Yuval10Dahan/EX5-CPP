#include <iostream>
#include <algorithm>
#include "MagicalContainer.hpp"


#define ZERO 0



using namespace std;


// constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : mContainer_(container), currIndex_(ZERO) {}

// 2 params constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container, size_t index) : mContainer_(container), currIndex_(index) {}

// copy constructor
MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : mContainer_(other.mContainer_),
currIndex_(other.currIndex_) {}




// --------------------------
// ### getters ###
// --------------------------


// getter method for the "mContainer" data member
const MagicalContainer& MagicalContainer::AscendingIterator::getMagicalContainer() const
{
    return this->mContainer_;
}

// getter method for the "currIndex" data member
size_t MagicalContainer::AscendingIterator::getCurrIndex() const
{
    return this->currIndex_;
}





// operator= (Assignment operator)
MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
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
bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
{
    const MagicalContainer *cAddress1 = &this->mContainer_;
    const MagicalContainer *cAddress2 = &other.getMagicalContainer();

    size_t index1 = this->currIndex_;
    size_t index2 = other.getCurrIndex();

    return ( (cAddress1 == cAddress2) && (index1 == index2) );
}

// operator !=
bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
{
    return !(*this == other);
}

// operator >
bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
{
    return (this->currIndex_ > other.getCurrIndex());
}

// operator <
bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
{
    return (this->currIndex_ < other.getCurrIndex());
}

// operator* (Dereference operator)
int MagicalContainer::AscendingIterator::operator*() const
{
    // if there is attempt to dereference beyond the container range - throw an exception
    if(currIndex_ >= mContainer_.size())
    {
        throw runtime_error("Can't dereference beyond the container range\n");
    }
    
    return this->mContainer_.getElements().at(currIndex_);
}
 
// operator++ (prefix --> ++i)
MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++()
{
    // if the current index is equal/large than the container size - throw an exception
    if(currIndex_ >= mContainer_.getElements().size())
    {
        throw runtime_error("Increment beyond the end\n");
    }

    // increment the index by 1
    this->currIndex_++;

    return *this; 
}

// begin iterator
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{   
    // return iterator to the first position in the container
    return AscendingIterator(mContainer_);
}

// end iterator
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{
    // return iterator to the one position after the last position in the container
    return AscendingIterator(mContainer_, mContainer_.size());
}