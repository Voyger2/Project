#include <iostream>
int searchArray(int size, std::string element, std::string array[]);
int main()
{
    std::string cars[] = {"Honda", "Mclaren" , "Ferrari" , "Porche" , "BMW" , "Mercedes"};
    int size = sizeof(cars)/sizeof(cars[0]);
    int index;
    std::string mycar;

    std::cout << "Enter the element you want to search";
    std::getline(std::cin , mycar);

    index = searchArray( size , mycar , cars);H

    if (index != -1){
        std::cout << mycar <<" is at index " << index;
    }
    else{
        std::cout << mycar << " is not in the array";
    }


    return 0;
}
int searchArray(int size, std::string element, std::string array[]){
    for( int i = 0; i < size ; i++){
        if (array[i] == element){
            return i;
        }
        
    }
    return -1;
}