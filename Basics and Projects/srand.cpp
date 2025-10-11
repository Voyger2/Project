#include <iostream>
int main (){
   
    srand(time(NULL));

    int Y = (rand() % 100) + 1;
    int X = (rand() % 100) + 1;

    std::cout << X << '\n';
    std::cout << Y << '\n';





    return 0;
}