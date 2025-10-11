#include <iostream>
class Country {
    public:
         std::string name;
         int economy;
         double percapita;

    Country(std::string name ,  int economy ,double percapita){
        this->name = name; 
        this->economy = economy;
        this->percapita = percapita; // "this-something" says the computer that it is not a individual variable but a member of the class//
    }

};
int main(){

    Country country1("Niger" , 2 , 10000);
    Country country2("India")

    std::cout << country1.name << '\n';
     std::cout << country1.economy << " Billion Dollars" << '\n';
      std::cout << country1.percapita << " Dollars" << '\n';




    return 0;
}