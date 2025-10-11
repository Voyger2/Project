/*#include <iostream>
class Human{
    public: 
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating \n";
        }
        void drink(){
            std::cout << "This person is drinking \n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};
int main(){
    Human human1;
    Human human2;

    human1.name = "Hiroshima nagasaki";
    human1.occupation = "Japanese Nuclear Bomb Testing Facility";
    human1.age = 33;

    human2.name = "Joe";
    human2.occupation = "Mexican cartel";
    human2.age = 21;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';
    human1.eat();
    human1.sleep();
    human1.drink();

     std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';
    human2.eat();
    human2.sleep();
    human2.drink();

    
    





    return 0;
}*/

#include <iostream>
class Car{
    public:
    std::string brand;
    std::string model;
    int year;
    std::string colour;

    void accelerate(){
        std::cout << "You step on the gas!\n";
    }
    void brake(){
        std::cout << "You step on the brakes\n";
    }

};
int main(){
    
    Car car1;

    car1.brand = "Mercedes";
    car1.model = "300SL";
    car1.colour = "Silver";
    car1.year = 1973;

    std::cout << car1.brand << '\n';
     std::cout << car1.model << '\n';
      std::cout << car1.colour << '\n';
       std::cout << car1.year << '\n';

       car1.accelerate();
       car1.brake();






    return 0;
}