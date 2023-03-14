#include <iostream>

int main(){

    //Assignment or Copy Initialization = ?
    int bike_count = 2;
    int truck_count = 45;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "Bike Count: " << bike_count << std::endl;
    std::cout << "Truck Count: " << truck_count << std::endl;
    std::cout << "Vehicle Count: " << vehicle_count << std::endl;
    std::cout << "Narrowing Conversion: " << narrowing_conversion_assignment << std::endl;

    //Check the size of the memory being used using sizeof
    std::cout << "size of int " << sizeof(int) << std::endl;
    std::cout << "size of truck " << sizeof(truck_count) << std::endl;

    return 0;
}