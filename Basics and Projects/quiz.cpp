#include <iostream>
int main(){
    std::string questions[] = {"1. What year is this",
                                "2. Whos ruled France" , 
                                "3. Who was the nazi ruler"};

     std::string options[][4] = {{"A. 2021" ,"B. 2020" , "C. 2022" , "D.2025" },
                                {"A. Napolean" , "B. Hitler", "C. Putin" , "D. Xi jin ping"},
                                {"A. Hitler" , "B. Louis XVI" , "C. Chocolate" , "D. Ice cream"}};

    char answerkey[] = {'D', 'A' , 'A'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0 ; i < size ; i++){
        std::cout << "######################\n";
        std::cout << questions[i] << '\n';
        std::cout << "######################\n";
        for (int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]) ; j++){
            
            std::cout <<options[i][j] << '\n';
        }
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerkey[i]){
            std::cout << "CORRECT!!";
            score++;
        }
        else{
            std::cout << "INCORRECT!!!";
            std::cout <<"Answer: " << answerkey[i];
        }

    }
     std::cout << "######################\n";
      std::cout <<"       Results:     " ;
     std::cout << "######################\n";
     std::cout << "CORRECT GUESSES: " << score << '\n';
     std::cout << "NUMBER OF QUESTIONS: " << size <<'\n';
     std::cout << "SCORE: " << (score/(double)size) *100 <<'\n';
    



    return 0;
}