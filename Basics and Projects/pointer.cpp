/* #include <iostream>
int main(){
    std::string name = "Yes";
    int age = 100;
    std::string freePizza[5] = {"Pizza1" , "Pizza2" , "Pizza3" , "Pizza4" , "Pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizza = freePizza;

    std::cout << *pName <<'\n';
    std::cout << *pAge  <<'\n';
    std::cout << *pFreePizza << '\n';



    return 0;
} */

#include <iostream>
int main(){
    int *pointer = nullptr;
    //int x = 0;

    //pointer = &x;
    if(pointer == nullptr){
        std::cout << "address not assinged";
    }
    else{
        std::cout << "adress is assigned";
    }

    return 0;
}