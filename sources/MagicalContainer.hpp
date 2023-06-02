#pragma once
#include <iostream>
#include <vector>


namespace ariel{}

// ######################################################################################################
// #####                                    MagicalContainer                                        #####
// ######################################################################################################

class MagicalContainer
{
    private: 
        std::vector<int> mysticalElements_; // original container

        std::vector<int> ascendingElements; // container in ascending order
        std::vector<int> sideCrossElements; // container in side cross order
        std::vector<int> primeElements; // container in prime order



    public:

        // constructor
        MagicalContainer() = default;

        // methods
        void addElement(int element);
        void removeElement(int element);
        int size() const;
        bool elementExists(int element);
        void arrangeAscending();
        void arrangeSideCross();
        void arrangePrime();



    // ######################################################################################################
    // #####                                    AscendingIterator                                       #####
    // ######################################################################################################

    class AscendingIterator 
    {
        private:
            MagicalContainer &mContainer_;

        public:

            // Constructor
            AscendingIterator(MagicalContainer &container);

            // // default constructor
            // AscendingIterator();

            // copy constructor
            AscendingIterator(const AscendingIterator &other);

            // destructor
            ~AscendingIterator();

            // getters
            MagicalContainer getMagicalContainer() const;

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
            MagicalContainer &mContainer_;

        public:

            // Constructor
            SideCrossIterator(MagicalContainer &container);

            // // default constructor
            // SideCrossIterator();

            // copy constructor
            SideCrossIterator(const SideCrossIterator &other);

            // destructor
            ~SideCrossIterator();

            // getters
            MagicalContainer getMagicalContainer() const;

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
            MagicalContainer &mContainer_;

        public:

            // Constructor
            PrimeIterator(MagicalContainer &container);

            // // default constructor
            // PrimeIterator();

            // copy constructor
            PrimeIterator(const PrimeIterator &other);

            // destructor
            ~PrimeIterator();

            // getters
            MagicalContainer getMagicalContainer() const;

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
    };
};