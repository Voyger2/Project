#include <iostream>

void happybirthday(std::string name, int age);
int main(){
    // function is a reusable block
    

    
    std::string name = "Bro";
    int age = 1000;
    happybirthday(name, age);

    return 0;
}
void happybirthday(std::string name, int age){
    
    std::cout << "Happy Birthday to  " << name << '\n';
    std::cout << "Happy Birthday to  " << name << '\n';
    std::cout << "Happy Birthday dear  " << name << '\n';
    std::cout << "Happy Birthday to  "  << name << '\n'; 
    std::cout << "You are " << age << " Years old";
}