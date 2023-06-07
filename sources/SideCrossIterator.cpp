#include <iostream>
#include <algorithm>
#include "MagicalContainer.hpp"


#define ZERO 0


using namespace std;


 
// Constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : mContainer_(container), currIndex_(ZERO),
Left_(ZERO), Right_(container.size() - 1), isLeft_(true), isRight_(false) {}

// 2 params constructor - no need for Left/Right/isLeft/isRight becuase the iterator isn't bi-directional
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container, size_t index) : mContainer_(container), currIndex_(index),
Left_(ZERO), Right_(ZERO), isLeft_(false), isRight_(false) {}

// // default constructor
// SideCrossIterator::SideCrossIterator() : mContainer_(MagicalContainer()) {}

// Copy constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator& other) : mContainer_(other.mContainer_),
currIndex_(other.currIndex_), Left_(other.Left_), Right_(other.Right_), isLeft_(other.isLeft_), isRight_(other.isRight_) {}

// destructor
MagicalContainer::SideCrossIterator::~SideCrossIterator() {}




// --------------------------
// ### getters ###
// --------------------------

const MagicalContainer& MagicalContainer::SideCrossIterator::getMagicalContainer() const
{
    return this->mContainer_;
}

size_t MagicalContainer::SideCrossIterator::getCurrIndex() const
{
    return this->currIndex_;
}

size_t MagicalContainer::SideCrossIterator::getLeft() const
{
    return this->Left_;
}

size_t MagicalContainer::SideCrossIterator::getRight() const
{
    return this->Right_;
}

bool MagicalContainer::SideCrossIterator::getIsLeft() const
{
    return this->isLeft_;
}

bool MagicalContainer::SideCrossIterator::getIsRight() const
{
    return this->isRight_;
}




// operator= (Assignment operator)
MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
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
    this->Left_ = other.getLeft();
    this->Right_ = other.getRight();

    // return the object after the changes
    return *this;
}

// operator == 
bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
{
    const MagicalContainer *cAddress1 = &this->mContainer_;
    const MagicalContainer *cAddress2 = &other.getMagicalContainer();

    size_t index1 = this->currIndex_;
    size_t index2 = other.getCurrIndex();

    // size_t Left1 = this->Left_;
    // size_t Left2 = other.getLeft();

    // size_t Right1 = this->Right_;
    // size_t Right2 = other.getRight();

    // bool isLeft1 = this->isLeft_;
    // bool isLeft2 = other.getIsLeft();

    // bool isRight1 = this->isRight_;
    // bool isRight2 = other.getIsRight();

    // return ( (cAddress1 == cAddress2) && (index1 == index2) && (Left1 == Left2) && (Right1 == Right2) &&
    // (isLeft1 == isLeft2) && (isRight1 == isRight2) );

    return ( (cAddress1 == cAddress2) && (index1 == index2) );
}

// operator !=
bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
{
    return !(*this == other);
}

// operator >
bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
{
    return (this->currIndex_ > other.getCurrIndex());
}

// operator <
bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
{
    return (this->currIndex_ < other.getCurrIndex());
} 

// operator* (Dereference operator)
int MagicalContainer::SideCrossIterator::operator*() const
{
    // return this->mContainer_.getElements().at(currIndex_);
    return this->mContainer_.getElements()[currIndex_];
}

// operator++ (prefix --> ++i)
MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++()
{   
    if(currIndex_ >= mContainer_.getElements().size())
    {
        throw runtime_error("Increment beyond the end\n");
    }

    else
    {
        // it is not the end
        if(Left_ != Right_)
        {
            // isRight == false
            if(isLeft_ == true)
            {   
                // current index is from the right side
                currIndex_ = Right_;
                Right_--;
                isLeft_ = false;
                isRight_ = true;
            }

            // isRight == true
            else
            {
                // current index is from the left side
                Left_++;
                currIndex_ = Left_;
                isRight_ = false;
                isLeft_ = true;
            }
        }

        // Left == right
        else
        {   
            // current index is out of the range of the container
            currIndex_ = this->mContainer_.size();
        }
    }
    
    return *this; 
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{
    return SideCrossIterator(mContainer_);
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{
    return SideCrossIterator(mContainer_, currIndex_);
    return *this;
}  