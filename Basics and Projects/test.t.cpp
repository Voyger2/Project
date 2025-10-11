
#include <iostream>

int main(){
    std::string person1;
    std::string person2;
    int age1;
    int age2;

    std::cout << "Enter the name of first person: ";
    std::cin >> person1;

    std::cout << "Enter the age of " << person1 ;
    std::cin >> age1;

    std::cout << "Enter the name of second person: ";
    std::cin >> person2; 

     std::cout << "Enter the age of " << person2 ;
    std::cin >> age2;

    if( age1 > age2){
        std::cout << person1 <<" is older than" << person2;
    }
    else{
        std::cout << person2 << "is older than" << person1;
    }

    return 0;


}
