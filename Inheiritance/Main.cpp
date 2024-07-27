//christopher cruz
//cis 1202
// july 27th, 2024
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main() {
    std::string manufacturer;
    int yearBuilt;
    int numberOfDoors;
    int towingCapacity;

    // Vehicle
    std::cout << "Enter the manufacturer for Vehicle: ";
    std::getline(std::cin, manufacturer);
    std::cout << "Enter the year built for Vehicle: ";
    std::cin >> yearBuilt;
    std::cin.ignore(); // Ignore newline character
    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();
    std::cout << std::endl;

    // Car
    std::cout << "Enter the manufacturer for Car: ";
    std::getline(std::cin, manufacturer);
    std::cout << "Enter the year built for Car: ";
    std::cin >> yearBuilt;
    std::cout << "Enter the number of doors for Car: ";
    std::cin >> numberOfDoors;
    std::cin.ignore(); // Ignore newline character
    Car car(manufacturer, yearBuilt, numberOfDoors);
    car.displayInfo();
    std::cout << std::endl;

    // Truck
    std::cout << "Enter the manufacturer for Truck: ";
    std::getline(std::cin, manufacturer);
    std::cout << "Enter the year built for Truck: ";
    std::cin >> yearBuilt;
    std::cout << "Enter the towing capacity for Truck: ";
    std::cin >> towingCapacity;
    std::cin.ignore(); // Ignore newline character
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();

    return 0;
}
