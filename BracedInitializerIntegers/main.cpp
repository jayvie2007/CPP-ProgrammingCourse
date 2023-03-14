#include <iostream>

int main(){
    // Braced Initializers or List or Uniform {}
    // Variable may contain garbage value 
    int elephant_count;
    int lion_count {}; //Initializes to 0
    int dog_count {10}; //Initialize to 10
    int cat_count {15}; // Initialize to 15

    // Can use expression as initializer
    int domesticated_animals {dog_count + cat_count};

    std::cout << "Total elephant count: " << elephant_count << std::endl;
    std::cout << "Total lion count: " << lion_count << std::endl;
    std::cout << "Total dog count: " << dog_count << std::endl;
    std::cout << "Total cat count: " << cat_count << std::endl;
    std::cout << "Total domesticated count: " << domesticated_animals << std::endl;

    // int new_numbers {doesnt_exist};

    // int narrowing_conversion {2.9};

    //Check the size of the memory being used using sizeof
    std::cout << "size of int " << sizeof(int) << std::endl;
    return 0;

}