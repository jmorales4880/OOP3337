#include "Video.h"
#include <iostream>

using namespace std;

Video::Video() {
    title = "Unknown";
    director = "Unknown";
    availableCopies = 0;
    rentalPrice = 0.0;
}

Video::Video(string title, string director, int copies, double price) {
    this->title = title;
    this->director = director;
    
    if (copies >= 0) {
        availableCopies = copies;
    } else {
        availableCopies = 0;
    }
    
    if (price >= 0.0) {
        rentalPrice = price;
    } else {
        rentalPrice = 0.0;
    }
}

string Video::getTitle() const { return title; }
string Video::getDirector() const { return director; }
int Video::getAvailableCopies() const { return availableCopies; }
double Video::getRentalPrice() const { return rentalPrice; }

void Video::setTitle(string title) { this->title = title; }
void Video::setDirector(string director) { this->director = director; }

void Video::setAvailableCopies(int copies) {
    if (copies >= 0) {
        availableCopies = copies;
    }
}

void Video::setRentalPrice(double price) {
    if (price >= 0.0) {
        rentalPrice = price;
    }
}

void Video::displayInfo() const {
    cout << "Title: " << title << " | Director: " << director 
         << " | Copies: " << availableCopies << " | Price: $" << rentalPrice << endl;
}

bool Video::rentCopy() {
    if (availableCopies > 0) {
        availableCopies--;
        return true;
    }
    return false;
}

void Video::returnCopy() {
    availableCopies++;
}