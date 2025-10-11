#include <iostream>
#include <iomanip>
void showbalance(double balance);
double deposit();
double withdraw(double balance);
int main(){
    double balance = 0;
    int choice = 0; //choice cannot be a decimal

    do{
        std::cout <<"*******************";
      std::cout <<"*******************";
      std::cout <<"Enter your choice\n";
      std::cout <<"1. Check Balance\n";
      std::cout <<"2. Deposit money\n";
      std::cout <<"3. Withdraw money\n";
      std::cout <<"4. Exit\n";
      std::cout <<"*******************";
      std::cout <<"*******************";
      std::cin >> choice;

      std::cin.clear();
      fflush(stdin); //These two functions prevent the program to break in case if alphabets are used

    switch(choice){
        case 1: showbalance(balance);
             break;
        case 2:  balance +=  deposit();
                showbalance(balance);
               break;
        case 3: balance -=  withdraw(balance);
                showbalance(balance);
               break;
        case 4: std::cout <<"Thank your for visiting ";
                break;
        default: std::cout << " Please select a choice";}

       }while(choice != 4);
    return 0;}
        void showbalance(double balance){
            std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance  << '\n';
        }

        double deposit(){
       double amount = 0;

       std::cout << "Enter the amount would you like to deposit: ";
       std::cin >> amount;
       if(amount <= 0){
        std::cout << "Please enter a valid number";
        return 0;
       }
       else{return amount;}
      
        }

       double withdraw(double balance){
        double amount = 0;

        std::cout << "Enter the amount you would like to withdraw: ";
        std::cin >>amount;
        if(amount > balance | amount <= 0){
          std::cout << "You don't have enough funds";
          return 0;
        }
        else {return amount;}
        
        }
   