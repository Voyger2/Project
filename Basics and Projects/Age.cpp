#include <iostream>
int main()
{   int age;
    std::cout <<"What is your age ";
    std::cin >> age;

    if(age >=18){
        std::cout << "Welcome to the website";
    }

    else{
        std::cout << "You are not old enough to access";

    }


    return 0;}