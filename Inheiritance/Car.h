//christopher cruz
//cis 1202
// july 27th, 2024
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car();
    Car(std::string manufacturer, int yearBuilt, int numberOfDoors);

    int getNumberOfDoors() const;
    void setNumberOfDoors(int numberOfDoors);

    void displayInfo() const;
};

#endif
