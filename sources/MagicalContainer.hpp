#pragma once
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

namespace ariel{};

class MagicalContainer {
public:
    std::vector<int> container;
    std::vector<int> order;

    MagicalContainer(){}

    void addElement(int);
    void removeElement(int);
    size_t size() const;

    class SideCrossIterator{
        public:

        MagicalContainer &container;
        size_t index;

        SideCrossIterator(MagicalContainer&);
        SideCrossIterator(MagicalContainer&, size_t);
        SideCrossIterator(const SideCrossIterator&);
        ~SideCrossIterator(){}

        SideCrossIterator begin() const;
        SideCrossIterator end() const;

        SideCrossIterator& operator=(const SideCrossIterator&);
        bool operator==(const SideCrossIterator&) const;
        bool operator!=(const SideCrossIterator&) const;
        bool operator<(const SideCrossIterator&) const;
        bool operator>(const SideCrossIterator&) const;
        int operator*();
        SideCrossIterator& operator++();
    };
    
    class PrimeIterator{
    public:

        MagicalContainer &container;
        size_t index;

        PrimeIterator(MagicalContainer&);
        PrimeIterator(MagicalContainer &, size_t);
        PrimeIterator(const PrimeIterator&);
        ~PrimeIterator(){}

        PrimeIterator begin() const;
        PrimeIterator end() const;

        PrimeIterator& operator=(const PrimeIterator&);
        bool operator==(const PrimeIterator&) const;
        bool operator!=(const PrimeIterator&) const;
        bool operator<(const PrimeIterator&) const;
        bool operator>(const PrimeIterator&) const;
        int operator*();
        PrimeIterator& operator++();
    };
    
    class AscendingIterator{
    public:

        MagicalContainer &container;
        size_t index;

        AscendingIterator(MagicalContainer&);
        AscendingIterator(MagicalContainer&, size_t);
        AscendingIterator(const AscendingIterator&);
        ~AscendingIterator(){}

        AscendingIterator begin() const;
        AscendingIterator end() const;

        AscendingIterator& operator=(const AscendingIterator& );
        bool operator==(const AscendingIterator&) const;
        bool operator!=(const AscendingIterator&) const;
        bool operator<(const AscendingIterator&) const;
        bool operator>(const AscendingIterator&) const;
        int operator*();
        AscendingIterator& operator++();

    };
};