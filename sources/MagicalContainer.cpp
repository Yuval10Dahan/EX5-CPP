#include <iostream>
#include <algorithm>
#include "MagicalContainer.hpp"


using namespace std; 


// --------------------------
// ### getters ###
// --------------------------

std::vector<int> MagicalContainer::getElements() const
{
    return this->mysticalElements_;
}

const std::vector<int*>& MagicalContainer::getPointerVector() const
{
    return this->pointerVector_;
}



// this method adds a specific element to the container in ascending order
void MagicalContainer::addElement(int element)
{
    // find the position to insert the new element
    // so the container will be in ascending order
    auto iter = std::lower_bound(mysticalElements_.begin(), mysticalElements_.end(), element);
    
    // insert the element before the first element that is not less than the given element
    mysticalElements_.insert(iter, element);   

    // update the pointer vector with each addition
    arrangePointerVector();
}

// this method erase a specific element in the container - if there is such element
void MagicalContainer::removeElement(int element)
{
    // the vector has at least 1 element
    if(mysticalElements_.size() > 0)
    {   
        // the element exists in the vector
        if(elementExists(element))
        {
            // loop through the vector with the iterator
            for(auto loc = mysticalElements_.begin(); loc != mysticalElements_.end(); ++loc)
            {
                // if the contents of the current index is equal
                // to the given element - erase it from the vector
                if(*loc == element)
                {
                    mysticalElements_.erase(loc);
                }
            }

            // update the pointer vector with each addition
            arrangePointerVector();
        }

        // the element is not exists in the vector
        else
        {
            throw runtime_error("There isn't such an element in the container\n");
        }
    }

    // container is empty
    else
    {
        throw runtime_error("There container is empty\n");
    }
}

// this method return the container's size
int MagicalContainer::size() const
{
    return mysticalElements_.size();
}

// this method checks if a specific element exists in the container
bool MagicalContainer::elementExists(int element)
{
    // begin and end Iterators
    auto vecBegin = this->mysticalElements_.begin();
    auto vecEnd = this->mysticalElements_.end();

    // returns an iterator pointing to the first occurrence of the element,
    // or the end iterator if the element is not found
    auto returningIterator = find(vecBegin, vecEnd, element);

    // the element exists
    if(returningIterator != vecEnd)
    {
        return true;
    }

    // the element doesn't exists
    else
    {
        return false;
    }
}

void MagicalContainer::arrangePointerVector()
{
    // if the vector contains elements - clear it before updating the container
    this->pointerVector_.clear();

    // go through the addresses in the container
    for(int &elementAddress : mysticalElements_)
    {
        // check if the element in that address is prime number
        if(isNumPrime(elementAddress))
        {
            // push the address of the prime element to the pointer vector
            pointerVector_.push_back(&elementAddress);
        }
    }
}

// this method check if the given number is prime
bool MagicalContainer::isNumPrime(int number) const
{
    bool prime = true;

    if(number < 2)
    {
        prime = false;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if(number % i == 0)
        {
            prime = false;
            break;
        }
    }
    
    return prime;
}