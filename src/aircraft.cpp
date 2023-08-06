#include "aircraft.h"
using namespace std;

//Initilization of the aircraft object
Aircraft::Aircraft(double weight, double wingArea, double engineThrust){
    this->weight = weight;
    this->wingArea =wingArea;
    this->engineThrust = engineThrust;
}

double Aircraft::getWeight() const{
    return weight;
}

double Aircraft::getEngineThrust() const {
    return engineThrust;
}

double Aircraft::getWingArea() const{
    return wingArea;
}


