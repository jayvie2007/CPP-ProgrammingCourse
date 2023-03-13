#include <iostream>
#include <string>

int main(){
    //Print Data
    // cout means C output

    int age{10};        
    std::string name;
    std:: cout << "Hello C++" << std::endl;
    std:: cout << "Your age is: " << age << std::endl;    

    //cerr means C error
    std:: cerr << "Error Message: Something is wrong" << std::endl;
    //clog means C log
    std:: clog << "Log message: Something Happened" << std::endl;

    std:: cout << "Please input your name and your age!" << std::endl;
    //cin means c input
    std:: cin >> name >> age;
    std:: cout << "Hello " << name << " and welcome to C++. Your age is: " << age << std::endl;

    //in order to store string line with spaces use std::getline
    std:: string full_name;
    int age2;
    std:: cout << "Please input your full name! " << std::endl;
    // include std::cin.ignore(); when inputting multiple data using std::getline() to avoid getline to be skipped
    std::cin.ignore();
    std::getline(std::cin, full_name);
    std:: cout << "Please input your age! " << std::endl;
    std:: cin >> age2;

    std:: cout << "Your name is: " << full_name << " and your age is: " << age2 << std::endl;

    return 0;
}
