#include <iostream>
template <typename X> // you can have 2 templates as well 
X max (X x , X y){
    return(x > y) ? x : y;
}
int main(){
  std::cout << max("4536728910", "45637289128376") << '\n';


    return 0;
}