#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include "MagicalContainer.hpp"


using namespace std;



std::vector<int> MagicalContainer::getElements() const
{
    return this->mysticalElements_;
}

std::vector<int> MagicalContainer::getAscendingElements() const
{
    return this->ascendingElements_;
}

std::vector<int> MagicalContainer::getSideCrossElements() const
{
    return this->sideCrossElements_;
}

std::vector<int> MagicalContainer::getPrimeElements() const
{
    return this->primeElements_;
}

// this method adds a specific element to the container
void MagicalContainer::addElement(int element)
{
    // adds the element to the vector
    this->mysticalElements_.push_back(element);
    
    // arranges all vectors
    updateAll();
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

            // arranges all vectors
            updateAll();
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

void MagicalContainer::arrangeAscending()
{
    vector<int> AscendingVector = this->mysticalElements_;

    std::sort(AscendingVector.begin(), AscendingVector.end());

    this->ascendingElements_ = AscendingVector;
}

void MagicalContainer::arrangeSideCross()
{
    vector<int> SideCrossVector;

    auto begin = this->mysticalElements_.begin();
    auto end = this->mysticalElements_.end() - 1;

    while (begin <= end)
    {
        SideCrossVector.push_back(*begin);

        begin++;

        if (begin <= end)
        {
            SideCrossVector.push_back(*end);
            end--;
        }
    }

    this->sideCrossElements_ = SideCrossVector;
}

void MagicalContainer::arrangePrime()
{
    vector<int> PrimeVector;

    for(int number : this->mysticalElements_)
    {
        if(isNumPrime(number))
        {
            PrimeVector.push_back(number);
        }
    }

    this->primeElements_ = PrimeVector;
}

void MagicalContainer::updateAll()
{
    // arrange the "ascendingElements" data member in ascending order
    arrangeAscending();

    // arrange the "sideCrossElements" data member in ascending order
    arrangeSideCross();

    // arrange the "primeElements" data member in ascending order
    arrangePrime();
}

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