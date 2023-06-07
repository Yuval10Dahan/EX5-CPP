#pragma once
#include <iostream>
#include <vector>
#include <cmath>


namespace ariel{}

// ######################################################################################################
// #####                                    MagicalContainer                                        #####
// ######################################################################################################

class MagicalContainer
{
    private: 
        std::vector<int> mysticalElements_; // original container
        std::vector<int*> pointerVector_; // int pointers to the elements in the container



    public:

        // constructor
        MagicalContainer() = default;

        // getters
        std::vector<int> getElements() const;
        const std::vector<int*>& getPointerVector() const;
        

        // methods
        void addElement(int element);
        void removeElement(int element);
        size_t size() const;
        bool elementExists(int element);
        void arrangePointerVector();
        bool isNumPrime(int number) const;
        

 

    // ######################################################################################################
    // #####                                    AscendingIterator                                       #####
    // ######################################################################################################

    class AscendingIterator 
    {
        private:
            MagicalContainer &mContainer_; // reference to the container
            size_t currIndex_;

        public:

            // Constructor
            AscendingIterator(MagicalContainer &container);

            // 2 params constructor
            AscendingIterator(MagicalContainer &container, size_t index);

            // // default constructor
            // AscendingIterator();

            // copy constructor
            AscendingIterator(const AscendingIterator &other);

            // destructor
            ~AscendingIterator();

            // getters
            const MagicalContainer& getMagicalContainer() const;
            size_t getCurrIndex() const;

            // operator= (Assignment operator)
            AscendingIterator& operator=(const AscendingIterator &other);

            // operator == 
            bool operator==(const AscendingIterator &other) const;

            // operator !=
            bool operator!=(const AscendingIterator &other) const;

            // operator >
            bool operator>(const AscendingIterator &other) const;

            // operator <
            bool operator<(const AscendingIterator &other) const;

            // operator* (Dereference operator)
            int operator*() const;

            // operator++ (prefix --> ++i)
            AscendingIterator& operator++();

            // begin iterator
            AscendingIterator begin();

            // end iterator
            AscendingIterator end();
    };



    // ######################################################################################################
    // #####                                    SideCrossIterator                                       #####
    // ######################################################################################################

    class SideCrossIterator
    {
        private:
            MagicalContainer &mContainer_; // reference to the container
            size_t currIndex_;
            size_t Left_;
            size_t Right_;
            bool isLeft_;
            bool isRight_;

        public:

            // Constructor
            SideCrossIterator(MagicalContainer &container);

            // 2 params constructor
            SideCrossIterator(MagicalContainer &container, size_t index);

            // // default constructor
            // SideCrossIterator();

            // copy constructor
            SideCrossIterator(const SideCrossIterator &other);

            // destructor
            ~SideCrossIterator();

            // getters
            const MagicalContainer& getMagicalContainer() const;
            size_t getCurrIndex() const;
            size_t getLeft() const;
            size_t getRight() const;
            bool getIsLeft() const;
            bool getIsRight() const;

            // operator= (Assignment operator)
            SideCrossIterator& operator=(const SideCrossIterator &other);

            // operator == 
            bool operator==(const SideCrossIterator &other) const;

            // operator !=
            bool operator!=(const SideCrossIterator &other) const;

            // operator >
            bool operator>(const SideCrossIterator &other) const;

            // operator <
            bool operator<(const SideCrossIterator &other) const;

            // operator* (Dereference operator)
            int operator*() const;

            // operator++ (prefix --> ++i)
            SideCrossIterator& operator++();

            // begin iterator
            SideCrossIterator begin();

            // end iterator
            SideCrossIterator end();
    };



    // ######################################################################################################
    // #####                                    PrimeIterator                                           #####
    // ######################################################################################################

    class PrimeIterator
    {
        private:
            MagicalContainer &mContainer_; // reference to the container
            size_t currIndex_;

        public:

            // Constructor 
            PrimeIterator(MagicalContainer &container);

            // 2 params constructor
            PrimeIterator(MagicalContainer &container, size_t index);

            // // default constructor
            // PrimeIterator();

            // copy constructor
            PrimeIterator(const PrimeIterator &other);

            // destructor
            ~PrimeIterator();

            // getters
            const MagicalContainer& getMagicalContainer() const;
            size_t getCurrIndex() const;

            // operator= (Assignment operator)
            PrimeIterator& operator=(const PrimeIterator &other);

            // operator == 
            bool operator==(const PrimeIterator &other) const;

            // operator !=
            bool operator!=(const PrimeIterator &other) const;

            // operator >
            bool operator>(const PrimeIterator &other) const;

            // operator <
            bool operator<(const PrimeIterator &other) const;

            // operator* (Dereference operator)
            int operator*() const;

            // operator++ (prefix --> ++i)
            PrimeIterator& operator++();

            // begin iterator
            PrimeIterator begin();

            // end iterator
            PrimeIterator end();
 
            void arrangePrime();
    };
};