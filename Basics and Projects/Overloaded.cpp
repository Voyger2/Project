#include <iostream>
void bakeacake();
void bakeacake(std::string topping1);
void bakeacake(std::string topping1 , int price);
int main()
{ 
    bakeacake("chocolate" , 100 );


    return 0;
}
void bakeacake(){
    std::cout << "Here is your cake ";
}
void bakeacake(std::string topping1){
    std::cout << "Here is your " << topping1 << " cake ";
}
void bakeacake(std::string topping1 , int price){
    std::cout << "Here is your " << topping1 << " cake " << "That will be " << price << " Dollars";
}