#include <iostream>
#include <ctime>
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player , char computer);

int main(){
    char player;
    char computer;

    player = getuserchoice();
    std::cout << "Your choice is: \n";
    showchoice(player);

    computer = getcomputerchoice();
    std::cout << "\nThe computer has chosen: \n";
    showchoice(computer);

    choosewinner(player , computer);


    return 0;
}
char getuserchoice(){

      char player;
      std::cout <<"ROCK-PAPER-SCISSORS\n";
       do{ std::cout <<"************\n";
        std::cout <<"'r' for Rock\n";
        std::cout <<"'p' for Paper\n";
        std::cout <<"'s' for Scissors\n";
            std::cin >> player;
       }while(player != 'r' && player != 'p' && player != 's' );

       return player;
       
    
}
char getcomputerchoice(){

    srand(time(0));
    int num = rand() % 3 + 1; 

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }



    return 0;
}
void showchoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock";
        break;
        case 'p': std::cout << "Paper";
        break;
        case 's': std::cout << "Scissors";
        break;
    }
   
}
void choosewinner(char player , char computer){

    switch(player){
        case 'r':  if(computer == 'r'){
                     std::cout << "Its a TIE!!\n";
                     }
                     else if(computer == 'p'){
                        std::cout <<"You LOSE!!\n";
                     }
                     else if(computer == 's'){
                        std::cout <<"You WIN!!\n";
                     }
                     break;
         case 'p':  if(computer == 'p'){
                     std::cout << "Its a TIE!!\n";
                     }
                     else if(computer == 's'){
                        std::cout <<"You LOSE!!\n";
                     }
                     else if(computer == 'r'){
                        std::cout <<"You WIN!!\n";
                     }
                     break;
          case 's':  if(computer == 's'){
                     std::cout << "Its a TIE!!\n";
                     }
                     else if(computer == 'r'){
                        std::cout <<"You LOSE!!\n";
                     }
                     else if(computer == 'p'){
                        std::cout <<"You WIN!!\n";
                     }
                     break;
                   
    }

    
   
}
