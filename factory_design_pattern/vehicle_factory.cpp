#include "vehicle_factory.hpp"

Vehcile *VehcileFactory::getVehicle(string vehicleType) {
  Vehcile *vehicle; 
}

if(vehicleType == "car") {
  vehicle = new Car();
} elseif(vehicleType == "bike") {
  vehicle = new Bike();
}
return vehicle;
}