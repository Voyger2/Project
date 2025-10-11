/*#include <iostream>

class Animal{
    public: 
        bool alive = true;
        
    void eat(){
        std::cout << "This animal is eating!\n";
    };
   
};
 class Dog : public Animal{
        public:

        void bark(){
           std::cout << "This dog is barking!\n";
        }
    };
  class Cat : public Animal{
    public : 
    void meow(){
        std::cout << "This cat Meows!\n";
    }
  };
int main(){
    Dog dog;
    Cat cat;
    std::cout << dog.alive << '\n';
   dog.eat();
   dog.bark();

   std::cout << cat.alive << '\n';
   cat.eat();
   cat.meow();

    return 0;
}*/

#include <iostream>
class Shape{
    public :
    double area;
    double volume;
};
class Cube : public Shape{
    public : 
    double side;
    Cube(double side){
        this-> side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    };
   
};
class Sphere : public Shape{
    public :
    double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14 * radius * radius;
        this->volume = 4 * 3.14 * radius * radius * radius / 3;
    };
    
};
int main(){

    Cube cube(10);
    Sphere sphere(5);

    std::cout << "Area of the cube is: " << cube.area << '\n';
    std::cout << "Volume of the cube is: " << cube.volume << '\n';
    std::cout << "Area of the sphere is: " << sphere.area << '\n';
    std::cout << "Volume of the sphere is: " << sphere.volume << '\n';





    return 0;
}