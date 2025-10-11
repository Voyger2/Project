/*#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

    int main(){

    student student1;
    student1.name = "Nigesh";
    student1.gpa = 9.1;
    student1.enrolled = true;
    
    
   
    student student2;
    student2.name = "Hakla";
    student2.gpa = 8.7;
    student2.enrolled = false;
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';

    
    return 0;
} */

// struct to function

#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string colour;
};
void printCar(Car car);
int main(){
    Car car1;
    Car car2;

    car1.model = "Ferrari";
    car1.year = 1999;
    car1.colour = "Red";

    car2.model = "Mercedes";
    car2.year = 2001;
    car2.colour = "Silver";

    printCar(car1);

    return 0;
}
void printCar(Car car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.colour << '\n';

}
