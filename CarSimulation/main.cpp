//
//  main.cpp
//  CarSimulation
//
//  Created by Cameron Bowen on 12/18/24.
//

//CAR SIMULATION
// features: project is to use derivatives velocity and accelartion and deaccelartion and position
// features: hold down button to accelarate and let go space button to slow but not brake, braking will be when you press another button.
// Also I want this to display all of the 4 main project features in output while simulation is running, this simulation will continue to run until another button is pressed. I want this program simulated in the terminal.
// Also I want to oraganize the code in classes and a seperate function as a menu

// tesla model 3 performance
class Car {
    // class for differentiation
private:
    double velocity;
    const double accelerate;
    const double maxSpeed;
    const double braking;
    double position;
    double time;
public:
    Car() : velocity(0), accelerate(8.68), maxSpeed(72.42), braking(10.0), position(0), time(0.1){}
};

class Menu {
    // menu for outputs and instructions
private:
public:
};

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    cout << "Hello, World!\n";
    return 0;
}
