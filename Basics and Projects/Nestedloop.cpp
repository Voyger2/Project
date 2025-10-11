#include <iostream>

int main(){

    int rows;
    int columns;
    char symbol;

    std::cout << "Select the number of rows";
    std::cin >> rows;

    std::cout << "Select the number of columns";
    std::cin >> columns;

    std::cout << "Enter the symbol";
    std::cin >> symbol;

    
    for(int x = 1; x <= rows; x++){
    for(int j = 1; j <= columns; j++){
        std::cout << symbol;
    }}






    return 0;
}