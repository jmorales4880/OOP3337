// The class implementation file
#include "Car.hpp"

Car::Car() {
    setMake("...");
    setModel("...");
    setYear(1900);
    setMPG(0);
}

Car::Car(const std::string& make_, const std::string& model_, int year, double mpg) {
    setMake(make_);
    setModel(model_);
    setYear(year);
    setMPG(mpg);
}

std::string Car::getMake() const {
    return make;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

double Car::getMPG() const {
    return MPG;
}

void Car::setMake(const std::string& make_) {
    if (!make_.empty()) {
        make = make_;
    }
}

void Car::setModel(const std::string& model_) {
    if (!model_.empty()) {
        model = model_;
    }
}

void Car::setYear(int year_) {
    year = (year_ > 1900) ? year_ : 1900;
}

void Car::setMPG(double MPG_) {
    MPG = (MPG_ > 0) ? MPG_ : 0;
}

void Car::print_info() const {
    std::cout << make << std::endl;
    std::cout << model << std::endl;
    std::cout << year << std::endl;
    std::cout << MPG << std::endl;
}