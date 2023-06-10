#include "MagicalContainer.hpp"

MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer& container) : container(container), index(0) {}
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer& container, size_t index) : container(container), index(index) {}
MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) : container(other.container), index(other.index) {}
MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other) {
    if(this != &other) {
        this->container = other.container;
        this->index = other.index;
    }
    return *this;
}

int MagicalContainer::PrimeIterator::operator*() {return container.container[index];}
bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& other) const {return this->index == other.index;}
MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++() {
    ++index;
    return *this;
}
bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& other) const {return true;}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() const{return PrimeIterator(*this);}
bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& other) const {return true;}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() const{
    return PrimeIterator(this->container, container.size());
}
bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& other) const {return !(*this == other);}
