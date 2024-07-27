//christopher cruz
//cis 1202
// july 27th, 2024
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string manufacturer;
    int yearBuilt;

public:
    Vehicle();
    Vehicle(std::string manufacturer, int yearBuilt);

    std::string getManufacturer() const;
    void setManufacturer(std::string manufacturer);

    int getYearBuilt() const;
    void setYearBuilt(int yearBuilt);

    void displayInfo() const;
};

#endif
