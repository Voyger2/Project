/*#include <bits/stdc++.h>
using namespace std;
 void f(int i, int n){
    if(i > n) return;
    cout << "RA";
    f( i + 1 , n);
}
void f(int i ,int n){
    if(i < 1) return;
    cout << i;
    f(i - 1 , n);
}
void g(int i , int n){
    if( i > n ) return;
    g(i + 1 , n);
    cout << i;
}
int main(){
    int n;
    cin >> n;
    g(1 , n);
}
*/


//Parameteric way//
/*#include <bits/stdc++.h>
using namespace std;
void f( int i , int sum){
    if(i < 1){
        cout << sum;
        return;
    }
    f(i - 1 , sum + i);
}
int main(){
    int n;
    cin >> n;
    f(n , 0);
}*/



// Functional way //
/*#include <bits/stdc++.h>
using namespace std;
void f(int n){
    if(n == 0){
        return;
    
    }
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
}*/


// Swapping arrays
/*#include <bits/stdc++.h>

using namespace std;

void f(string a[] ,int i ,int n){
    if( i >= n/2) return;

    swap(a[i] , a[n - i - 1]);
    f(a , i + 1 , n);
}
int main(){
    int n;
    cin >> n;
    string a[n];
    for(int i = 0 ; i<n ; i++) cin >> a[i];
      for (int i = 0; i < n ; i++){
        cout << a[i];
         if( a[n] == a[i])
        cout << "True";
        else cout << "False";
    
      }
}*/

/*#include <bits/stdc++.h>
using namespace std;

void f(string a[] , int i , int n){
    if(i >= n/2) return;
    if(a[i] != a[n-i-1]) return False;
    return f(i + 1);

}
int main(){
    int n;
    string a[n];
    cout << a[i];
    
    for(int i = 0 ; i < n ;  i++) cin >> a[i];
    f(a , 0 , n)
    for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
    return 0;

}*/

// Multiple reccursion and FIBONACCI
#include <bits/stdc++.h>
using namespace std;
// using int instead of void because int provides a integer in return unlike void.
int f(int n){
    if(n <= 1) {return n;} ;

    return f(n-1) + f(n - 2);
}
int main(){
    int n;
    cout << f(6);
}
 