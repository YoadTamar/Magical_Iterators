#include "MagicalContainer.hpp"

MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer& container) : container(container), index(0) {}
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer& container, size_t index) : container(container), index(index) {}
MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : container(other.container), index(other.index) {}
MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other) {
    if(this != &other) {
        this->container = other.container;
        this->index = other.index;
    }
    return *this;
}

bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& other) const {return true;}
bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& other) const {return this->index == other.index;}
int MagicalContainer::SideCrossIterator::operator*() {
    return container.container[index];
}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() const{
    return SideCrossIterator(this->container, container.size());
}
MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++() {
    ++index;
    return *this;
}
bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& other) const {return true;}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() const{
    return SideCrossIterator(*this);
}
bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& other) const {return !(*this == other);}
