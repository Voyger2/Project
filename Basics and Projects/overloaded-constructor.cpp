#include <iostream>
class Pizza{
    public:
    std::string topping1;
    std::string topping2;
    std::string topping3;
    

    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
     Pizza(std::string topping1 , std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
      Pizza(std::string topping1 , std::string topping2 , std::string topping3){
        this->topping1 = topping1;
        this->topping2 = topping2;
        this->topping3 = topping3;
    }

};

int main(){

    Pizza pizza1("Paneer");
    Pizza pizza2("mushrooms , cheese");
    Pizza pizza3("Potato");
        std::cout << pizza3.topping1 <<'\n';
        std::cout << pizza3.topping2 <<'\n';
        std::cout << pizza3.topping3 << '\n';
         return 0;
}      