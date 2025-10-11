#include <iostream>
#include <ctime>
void drawBoard(char *spaces);
void playermove(char *spaces , char player);
void computermove(char *spaces , char computer);
bool checkwinner (char *spaces , char player , char computer);
bool checktie (char *spaces);
int main(){
    char spaces[9] = {' ', ' ',' ', ' ',' ', ' ',' ', ' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);// drawboard updates the board after every move
    
    while(running){
        playermove(spaces , player);
        drawBoard(spaces);
        if(checkwinner(spaces , player , computer)){
            running = false;
            break;
        }
        else if(checktie(spaces)){
            running = false;
            break;
        }

        computermove(spaces , computer);
        drawBoard(spaces);
         if(checkwinner(spaces , player , computer)){
            running = false;
            break;
        }
          else if(checktie(spaces)){
            running = false;
            break;
        }
    }
    std::cout << "Thanks for Playing";

    return 0;
}
void drawBoard(char *spaces){
    std::cout <<'\n';
    std::cout << "     |     |     " <<'\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |    " << spaces[2] << "  " <<'\n';
    std::cout << "_____|_____|_____" <<'\n';
    std::cout << "     |     |     " <<'\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |    " << spaces[5] << "  " <<'\n';
    std::cout << "_____|_____|_____" <<'\n';
    std::cout << "     |     |     " <<'\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |    " << spaces[8] << "  " <<'\n';
    std::cout << "     |     |     " <<'\n';
      std::cout <<'\n';
}
void playermove(char *spaces , char player){
     int number;
     do{
     std::cout << "Select a number between 1-9";
      std::cin >> number;
      number--;
      if(spaces[number] == ' '){
      spaces[number] = player;
      break;}
      else{
      std::cout << "That space is already occupied";
      }
     
     }while (!number > 0 || !number < 8);

}
void computermove(char *spaces , char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;
        if(spaces[number] ==' '){
            spaces[number] = computer; //regsiters the move for the computer
            std::cout << "the computer has chosen: " << number;
            break;
        }

}}
bool checkwinner (char *spaces , char player , char computer){
    //#######################################################//
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? std::cout << "YOU WIN!!!" : std::cout << "YOU LOSE!!";
    }
   // ######################################################## //
    if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? std::cout << "YOU WIN!!!" : std::cout << "YOU LOSE!!";
    }
    //##########################################################//
    if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? std::cout << "YOU WIN!!!" : std::cout << "YOU LOSE!!";
    }
    //###########################################################//
    if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? std::cout << "YOU WIN!!!" : std::cout << "YOU LOSE!!";
    }
    //###########################################################//
    if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? std::cout << "YOU WIN!!!" : std::cout << "YOU LOSE!!";
    }
    //############################################################//
    if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? std::cout << "YOU WIN!!!" : std::cout << "YOU LOSE!!";
    }
    //############################################################//
    if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player ? std::cout << "YOU WIN!!!" : std::cout << "YOU LOSE!!";
    }
    //#############################################################//
    if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? std::cout << "YOU WIN!!!" : std::cout << "YOU LOSE!!";
    }
    //#############################################################//
    else {
        return false;
    }
    return true;
    
}
 bool checktie (char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "Its  a TIE!!!";

    return true;
}