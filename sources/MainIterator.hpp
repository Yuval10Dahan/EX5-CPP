// #pragma once
// #include <iostream>
// #include "MagicalContainer.hpp"


// namespace ariel{}


// class MainIterator
// {
//     private: 
//         MagicalContainer &mContainer_;
//         size_t currIndex_;


//     public:

//         // Constructor
//         MainIterator(MagicalContainer &container);

//         // 2 params constructor
//         MainIterator(MagicalContainer &container, size_t index);

//         // // default constructor
//         // Iterator();

//         // copy constructor
//         MainIterator(const MainIterator &other);

//         // destructor
//         virtual ~MainIterator();

//         // getters
//         MagicalContainer getMagicalContainer() const;
//         size_t getCurrIndex() const;

//         // operator= (Assignment operator)
//         virtual MainIterator& operator=(const MainIterator &other);

//         // operator == 
//         virtual bool operator==(const MainIterator &other) const;

//         // operator !=
//         bool operator!=(const MainIterator &other) const;

//         // operator >
//         bool operator>(const MainIterator &other) const;

//         // operator <
//         bool operator<(const MainIterator &other) const;

//         // operator* (Dereference operator)
//         virtual int operator*() const;

//         // operator++ (prefix --> ++i)
//         virtual MainIterator& operator++();

//         // begin iterator
//         virtual MainIterator begin();

//         // end iterator
//         virtual MainIterator end();
// };