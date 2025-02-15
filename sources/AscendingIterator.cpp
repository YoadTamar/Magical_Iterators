#include "MagicalContainer.hpp"

MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer& container) : container(container), index(0) {}
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer& container, size_t index) : container(container), index(index) {}
MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container), index(other.index) {}
MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other) {
    if(this != &other) {
        this->container = other.container;
        this->index = other.index;
    }
    return *this;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() const{return AscendingIterator(*this);}
bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator& other) const {return true;}
bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator& other) const {
    return this->index == other.index;
}
bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator& other) const {return true;}
int MagicalContainer::AscendingIterator::operator*() {return container.container[index];}
MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++() {
    ++index;
    return *this;
}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() const{
    return AscendingIterator(this->container, container.size());
}
bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator& other) const {return !(*this == other);}