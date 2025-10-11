#include <iostream>
void calc(double num1 , double num2 , char op1 , double result1 );
void calc(double result1 , double num3 , char op2 , double result2 );
int main(){
    double num1;
    double num2;
    double num3;
    double result1;
    double result2;
    char op1;
    char op2;

    std::cout <<"Enter your desired operator";
    std::cin >> op1;

    std::cout <<"Enter the first number: ";
    std::cin >> num1;

    std::cout <<"Enter the second number: ";
    std::cin >> num2;

    std::cout <<"Enter your desired operator";
    std::cin >> op2;

    std::cout <<"Enter the third number: ";
    std::cin >> num3;

 switch(op1){
        case '+':
        result1 = num1 + num2;
        std::cout << "result: " << result1 <<'\n';
        break;

        case '-':
        result1 = num1 - num2;
        std::cout << "result: " << result2 <<'\n';
        break;

        case '*':
        result1= num1 * num2;
        std::cout << "result: " << result1 <<'\n';
        break;

        case '/':
        result1 = num1 / num2;
        std::cout << "result: " << result1 <<'\n';
        break;

        default:
        std::cout << "That was not a valid input";
        break;}

         switch(op2){
        case '+':
        result2 = result1 + num3;
        std::cout << "result: " << result2 <<'\n';
        break;

        case '-':
        result2 = result1- num3;
        std::cout << "result: " << result2 <<'\n';
        break;

        case '*':
        result2= result1 * num3;
        std::cout << "result: " << result2 <<'\n';
        break;

        case '/':
        result2 = result1 / num3;
        std::cout << "result: " << result2 <<'\n';
        break;

        default:
        std::cout << "That was not a valid input";
        break;}

  

    return 0;
         }
 
   