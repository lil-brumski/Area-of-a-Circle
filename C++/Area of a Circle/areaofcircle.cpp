#include <iostream>
#include <cmath>
#include <iomanip>
#include "areaofcircle.h" 

int main() {

    double radius = getInput<double>("Enter the radius of the circle in cm: ");    
    
    while(radius <= 0){
        std::cout<<"\nRadius can't be "<<radius<<"cm. Try again.\n"<<std::endl;
        radius = getInput<double>("Enter the radius of the circle in cm: ");
    }
       
    double area = M_PI * std::pow(radius, 2);
    
    std::cout<<"\nThe area of a circle of radius "<<radius<<"cm is "<<std::fixed<<std::setprecision(2)<<area<<"cm²";
    
    return 0;
}