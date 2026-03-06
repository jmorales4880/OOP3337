#include "Car.hpp"
#include "CarDealer.hpp"

bool isEfficient(const Car& car);


int main(void) {
    // Create an object of Car class
    Car ferrari_f50;
    ferrari_f50.setMake("Ferrari");
    ferrari_f50.setModel("F50");
    ferrari_f50.setYear(2025);
    ferrari_f50.setMPG(13.5);

    Car ferrari_superGT("Ferrari", "Super GT", 2021, 10.7);
    Car ferrari_spider("Ferrari", "Spider", 2020, 11.7);


    // Create CarDealer
    CarDealer lakeland_ferrari;

    // Add inventory
    lakeland_ferrari.addCar(ferrari_f50);
    lakeland_ferrari.addCar(ferrari_spider);
    lakeland_ferrari.addCar(ferrari_superGT);

    // Show the inventory
    lakeland_ferrari.showInventory();

    std::cout << isEfficient(ferrari_spider) << std::endl;

    return 0;
}

bool isEfficient(const Car& car) {
    return (car.getMPG() > 20.0) ? true : false;
}