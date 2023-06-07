// #include <iostream>
// #include <algorithm>
// #include "MainIterator.hpp"


// #define ZERO 0
 

// using namespace std;


// // constructor
// MainIterator::MainIterator(MagicalContainer &container) : mContainer_(container), currIndex_(ZERO) {}

// // // default constructor
// // Iterator::Iterator() : mContainer_(MagicalContainer()) {}

// // copy constructor
// MainIterator::MainIterator(const MainIterator &other) : mContainer_(other.mContainer_), currIndex_(other.getCurrIndex()) {}

// // destructor
// MainIterator::~MainIterator() {}




// // --------------------------
// // ### getters ###
// // --------------------------

// MagicalContainer MainIterator::getMagicalContainer() const
// {
//     return this->mContainer_;
// }

// size_t MainIterator::getCurrIndex() const
// {
//     return this->currIndex_;
// }





// // operator= (Assignment operator)
// MainIterator& MainIterator::operator=(const MainIterator &other)
// {
//     return *this;
// }

// // operator == 
// bool MainIterator::operator==(const MainIterator &other) const
// {
//     return false;
// }

// // operator !=
// bool MainIterator::operator!=(const MainIterator &other) const
// {
//     return false;
// }

// // operator >
// bool MainIterator::operator>(const MainIterator &other) const
// {
//     return false;
// }

// // operator <
// bool MainIterator::operator<(const MainIterator &other) const
// {
//     return false;
// }

// // operator* (Dereference operator)
// int MainIterator::operator*() const
// {
//     return 0;
// }

// // operator++ (prefix --> ++i)
// MainIterator& MainIterator::operator++()
// {
//     return *this;
// }

// // begin iterator
// MainIterator MainIterator::begin()
// {
//     return *this;
// }

// // end iterator
// MainIterator MainIterator::end()
// {
//     return *this;
// }