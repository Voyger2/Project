#include <iostream>
int num = 1; // avoid using global variable
void printnum();
int main(){
    int num = 10;
    printnum();
    std::cout << ::num <<'\n';
}
 void printnum(){
    int num = 17;
    std::cout << ::num <<'\n';
 }
 // adding '::' before a variable will make the function ignore the number present inside curly brackets and will consider global variable
 