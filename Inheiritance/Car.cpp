//christopher cruz
//cis 1202
// july 27th, 2024
#include "Car.h"
#include <iostream>

Car::Car() : Vehicle(), numberOfDoors(0) {}

Car::Car(std::string manufacturer, int yearBuilt, int numberOfDoors)
    : Vehicle(manufacturer, yearBuilt), numberOfDoors(numberOfDoors) {}

int Car::getNumberOfDoors() const {
    return numberOfDoors;
}

void Car::setNumberOfDoors(int numberOfDoors) {
    this->numberOfDoors = numberOfDoors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    std::cout << "Number of Doors: " << numberOfDoors << std::endl;
}
