#include <iostream>
// This are the functions
int addNumbers (int first_param, int second_param){
        int result = first_param + second_param;
        return result;
}

int main(){
    //This are the statements
    int firstNumber = 7;
    int secondNumber = 12;
    int value = firstNumber + secondNumber;

    std:: cout << "The first number is: " << firstNumber << std::endl;
    std:: cout << "The second number is: " << secondNumber << std::endl;

    std:: cout << "The sum of firstnumber and secondnumber is: " << value << std::endl; 


    int sum = addNumbers(30, 69);
    std:: cout << "Sum: " << sum << std::endl;   

    sum = addNumbers(69,69);
    std:: cout << "Sum: " << sum << std::endl;

    sum = addNumbers(19,1);
    std:: cout << "Sum: " << sum << std::endl;
    
    //The functions can also be called directly
    std:: cout << "Sum: " << addNumbers(23,10) << std::endl;
    return 0;
}