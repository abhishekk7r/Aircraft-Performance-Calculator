#include <iostream>
#include <aircraft.h>
#include <performance_calculator.h>
using namespace std;

int main(){
    double weight, wingArea, engineThrust;

    cout<<"Enter the weight (Kg): "<<endl;
    cin>>weight;

    cout << "Enter aircraft wing area (m^2): ";
    cin >> wingArea;

    cout << "Enter aircraft engine thrust (N): ";
    cin >> engineThrust;

    Aircraft aircraft(weight, wingArea, engineThrust);

    int choice;
    cout<<"Select the peformance parameter to calculate \n";
    cout << "1. Takeoff Distance\n";
    cout << "2. Landing Distance\n";
    cout << "3. Climb Rate\n";
    cout << "4. Range\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            cout<<"Takeoff Distance"<<PerformanceCal::calculateTakeOffDistance(aircraft)<<" meters"<<endl;
        case 2:
            std::cout << "Landing Distance: " << PerformanceCal::calculateLandingDistance(aircraft) << " meters\n";
            break;
        case 3:
            std::cout << "Climb Rate: " << PerformanceCal::calculateClimbRate(aircraft) << " meters per second\n";
            break;
        case 4:
            std::cout << "Range: " << PerformanceCal::calculateRange(aircraft) << " meters\n";
            break;
        default:
            std::cout << "Invalid choice!\n";
            break;
    }


    return 0;
        
}