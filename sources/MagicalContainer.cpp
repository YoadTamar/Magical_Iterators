#include "MagicalContainer.hpp"

size_t MagicalContainer::size() const {
    return this->container.size();
}

void MagicalContainer::addElement(int num) {
    this->container.emplace_back(num);
    auto it = std::lower_bound(order.begin(), order.end(), num);
    order.insert(it, num);
}

void MagicalContainer::removeElement(int num) {
   return;
}