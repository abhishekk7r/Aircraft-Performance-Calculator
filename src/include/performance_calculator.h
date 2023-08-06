#ifndef PerformanceCalulator_H
#define PerformanceCalulator_H

#include "aircraft.h"

class PerformanceCal{
    public:
        static double calculateTakeOffDistance(const Aircraft& aircraft);
        static double calculateLandingDistance(const Aircraft& aircraft);
        static double calculateClimbRate(const Aircraft& aircraft);
        static double calculateRange(const Aircraft& aircraft);
};


#endif