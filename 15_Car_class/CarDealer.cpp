#include "CarDealer.hpp"

void CarDealer::addCar(const Car& car) {
    inventory.push_back(car);
}

void CarDealer::showInventory() const {
    for (int i = 0; i < inventory.size(); i++) {
        inventory[i].print_info();
    }
}