#include <iostream>

int main(){
    //Functional or Direct Initializers ()
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    //int bad_initialization (Doenst_exist + Doesnt_exist2);
    //Information lost. less safe than braced initializers

    int narrowing_conversion_functional(2.9);

    std::cout << "Total apple count: " << apple_count << std::endl;
    std::cout << "Total orange count: " << orange_count << std::endl;
    std::cout << "Total fruit count: " << fruit_count << std::endl;

    std::cout << "Narrowing Conversion: " << narrowing_conversion_functional << std::endl;

    
    //Check the size of the memory being used using sizeof 
    std::cout << "size of int " << sizeof(int) << std::endl;
    return 0;
}