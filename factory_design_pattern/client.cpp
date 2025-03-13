#include <iostream>
#include "car.hpp"
#include "bike.hpp"

using namespace std;

int main() {
    string vehicleType;
    cin >> vehicleType;
    Vehicle* vehicle; // pointer to the base class

    if (vehicleType == "car") {
        vehicle = new Car();
    } elseif (vehicleType == "bike") {
        vehicle = new Bike();
    }

    vehicle->createVehicle(); // call the function

    return 0;
}
