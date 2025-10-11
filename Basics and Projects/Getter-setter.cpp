#include <iostream>
class Stove{
    private:
        int temperature = 0;
    public:

    int getTemperature(){ //This is a readable function
        return temperature;
    }
    void setTemperature(int temperature){
        this->temperature = temperature;
    }
};
int main(){
    Stove stove;

    stove.setTemperature(100000000);

    std::cout <<" The temperature is : " << stove.getTemperature << '\n';

    return 0;
}