#include <iostream>
#include <ctime>
#include <cstdlib>


int main() {

    int num = 0;
    int guess = 0;
    int tries = 0;

    srand(time(NULL));                // The NULL function uses time as a seed to generate a random number
    num = (rand() % 10) + 1;
    std::cout << "###### NUMBER GUESSING ######\n";

    do{
        std::cout << "Guess a number between (1-10)\n";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "TOO HIGH \n";
        } 
        else if( guess < num) {
            std::cout << "TOO LOW \n ";
        }
        else{
            std::cout << "CORRECT!  # of tries" << tries ;
        }


    }while (guess != num); // '!=' represents that guess is not equal to num



    return 0;
}