#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
    case 1: std::cout << "You have won a Diamond";
    break;
    case 2: std::cout << "You have won a Emerald";
    break;
    case 3: std::cout << "You have won a Gold";
    break;
    case 4: std::cout << "You have won a Iron";
    break;
    case 5: std::cout << "You have won a Copper";
    break;
    case 6: std::cout << "You have won a Coal";
    break;}

    return 0;
}