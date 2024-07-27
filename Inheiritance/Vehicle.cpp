//christopher cruz
//cis 1202
// july 27th, 2024
#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() : manufacturer(""), yearBuilt(0) {}

Vehicle::Vehicle(std::string manufacturer, int yearBuilt)
    : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

std::string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setManufacturer(std::string manufacturer) {
    this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() const {
    std::cout << "Manufacturer: " << manufacturer << std::endl;
    std::cout << "Year Built: " << yearBuilt << std::endl;
}
