#include <performance_calculator.h>
#include <cmath>

double PerformanceCal::calculateTakeOffDistance(const Aircraft & aircraft){
    double takeOffDistance = 2 * (sqrt(aircraft.getWeight()) / 9.81);
    return takeOffDistance; 
}

double PerformanceCal::calculateLandingDistance(const Aircraft& aircraft){
    //Assuming constant deceleration and g = 9.81 m/s^2
    double landingDistance = 1.5 * (sqrt(aircraft.getWeight())/9.81);
    return landingDistance;
}

double PerformanceCal::calculateClimbRate(const Aircraft &aircraft){
    double climbRate = 0.1 * (aircraft.getEngineThrust()/ aircraft.getWeight());
    return climbRate;
}

double PerformanceCal::calculateRange(const Aircraft &aircraft){
    double range = 5.0 * (aircraft.getEngineThrust() * 1000);
}


