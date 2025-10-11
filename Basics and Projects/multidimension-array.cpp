#include <iostream>
int main(){
    std::string cars[][3] = {{"Aventador" , "SVJ", "Miura"},
                             {"Land cruiser" , "Prius" , "Supra"},
                             {"SF90" , "F40" , "Enzo"}};

        
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < columns ; j++){
        std::cout << cars[i][j] <<'\n';
        }
    }
    return 0;
}