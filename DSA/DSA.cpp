#include <bits/stdc++.h>
using namespace std;
/* void print2(int n){
    for (int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            std::cout << "* ";
        }
        std::cout << endl;
    }}*/

/*void print3(int n){
for (int i = 0 ; i<n ; i++){
    //space 
    for (int j = 0 ; j<= i ; j++){
        cout << " ";

    }
    //stars
    for(int j = 0 ; j < 9-2*i ; j++){
        cout << "*";
     
    }
    //space 
    for (int j = 0 ; j<= i ; j++){
        cout << " ";
    }
    cout << endl;
}
} */
/*void print4(int n){
for (int i = 0 ; i < n ; i++){
    //stars
    for (int j = 0 ; j < i ; j++){
        cout << "*";
    }
    //spaces
    for(int j = 0 ; j < n-i-1 ; j++){
        cout << " ";
    }
}}; */
/*void print5(int n){

    int space = 2*n-1;
    
    for(int i = 0 ; i <= n ; i++){
        
        //numbers
        for(int j = 1 ; j <= i ; j++){
            cout << j;
        }
        //spaces 
        for(int j = 0 ; j <= space ; j++){
            cout << " ";
        }


        //numbers
        for(int j = i ; j >= 1 ; j--){
            cout << j;
        }
        cout << endl;
        space -=2;
    }
   }*/
void print6(int n){
    int num = 1;
    for(int i = 1 ; i < n ; i++){
        //numbers
        for(int j = 1; j <= i ; j++){
            cout << num;
            num = num + 1;
        }
    
        cout << endl;
    }
}
void print7(int n){
    for(int i = 0 ; i<n ; i++){
        for(char ch = 'A' ; ch <= 'A' + (n-i-1) ; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }

}
void print8(int n){
    for(int i = 0 ; i<n ; i++){
        char ch = 'A' + i;
        for(int j = 0 ; j <= i ; j++){
            cout << ch << " ";
        }
        cout << endl;  

}}
void print9(int n){
    for(int i = 0 ; i < n ; i++){

        //spaces
        for(int j = 0 ; j < n-i-1 ; j++){
            cout << " ";
        }
        //alphabets
        char ch = 'A';
        int breakpoint = (2*i +1 ) / 2;
        for(int j = 0; j <= 2*i + 1 ; j++){
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        //spaces
        for(int j = 0 ; j < n-i-1 ; j++){
            cout << " ";

    }
    cout << endl;
}};
void print10(int n){
    for(int i = 0 ; i < n ; i++){
        for(char ch = 'E'- i; ch <= 'E' ; ch++  ){
            cout << ch;
    
        }
            cout << endl;

    }
}
void print11(int n){

    for(int i = 0 ; i <= n ; i++){
        //stars
        for (int j = 0 ; j <= n-i; j++){
            cout << "*";
        }
        //spaces
        for (int j = 0 ; j <= 2*i ; j++){
            cout << " ";
        }
         //stars
        for (int j = 0 ; j <= n-i ; j++){
            cout <<"*";
        }
        for(int j = 0 ; j <= n ; j++){
            //stars
            for(int j = 0 ; j<=i; j++){
                cout << "*";
            }
            //spaces
            for(int j = 0 ; j)
        }
        
    
    }
    }
void print12(int n){

    }
int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++ ){
        int n;
        cin >> n;
        print11(n);
    }
}