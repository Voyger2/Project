#include <iostream>

int main(){
    char grade;
    std::cout << "Enter your grade from A-C";
    std::cin >> grade;

    switch(grade){
      case 'A': 
        std::cout << "VERY GOOD!!";
        break;

        case 'B':
        std::cout << "GOOD!!";
        break;

        case 'C':
        std::cout << "NICE!!";
        break;

        default:
        std::cout << "please only enter letter A-C"; }

    return 0;}
