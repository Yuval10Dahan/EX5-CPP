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

        std::vector<int> ascendingElements_; // container in ascending order
        std::vector<int> sideCrossElements_; // container in side cross order
        std::vector<int> primeElements_; // container in prime order



    public:

        // constructor
        MagicalContainer() = default;

        // getters
        std::vector<int> getElements() const;
        std::vector<int> getAscendingElements() const;
        std::vector<int> getSideCrossElements() const;
        std::vector<int> getPrimeElements() const;
        


        // methods
        void addElement(int element);
        void removeElement(int element);
        int size() const;
        bool elementExists(int element);
        void arrangeAscending();
        void arrangeSideCross();
        void arrangePrime();
        void updateAll();
        bool isNumPrime(int number) const;



    // ######################################################################################################
    // #####                                    AscendingIterator                                       #####
    // ######################################################################################################

    class AscendingIterator 
    {
        private:
            MagicalContainer &mContainer_;
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
            MagicalContainer &getMagicalContainer() const;
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
            MagicalContainer &mContainer_;
            size_t currIndex_;

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
            MagicalContainer &getMagicalContainer() const;
            size_t getCurrIndex() const;

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
            MagicalContainer &getMagicalContainer() const;
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

            // other methods
            
    };
};