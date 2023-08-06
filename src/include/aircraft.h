#ifndef AIRCRAFT_H
#define AIRCRAFT_H


class Aircraft {
    private:
        double weight; //in kilogram
        double wingArea; //in square meter
        double engineThrust; //in Newton

    public:
        //constructor for Aircraft object
        Aircraft(double weight, double wingArea, double engineThrust);

        double getWeight() const;
        double getWingArea() const;
        double getEngineThrust() const;
};

#endif

