#include <iostream>
int main(){
    std::string students[] = {"Pikachu" , "squirtle" , "charmander","Bulbasaur"};

    for(std::string student : students){
        std::cout <<student <<'\n' ;
        }



    return 0;
}