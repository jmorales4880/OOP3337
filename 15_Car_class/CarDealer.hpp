#include "Car.hpp"
#include <vector>

#ifndef CARDEALER_HPP
#define CARDEALER_HPP

class CarDealer {
public:
    void showInventory() const; // Print all cars
    void addCar(const Car& car); // Add the given car to the inventory

private:
    std::vector<Car> inventory;
};

#endif