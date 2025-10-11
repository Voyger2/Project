/*#include <bits/stdc++.h>
using namespace std;

void f(int a [] , int n , int i){
    //swapping of numbers in array
   if(i >= n / 2) return;
   
   swap(a[i], a[n - i - 1]);
   f(a , n , i + 1);
    
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    f(a , n , 0);
    for(int i = 0 ; i < n ; i++) cout << a[i] << " ";

    return 0;

}*/

// #include <bits/stdc++.h>
// using namespace std;

// bool f(int a[] , int n , int i){
//       //swapping of numbers in array
//    if(i >= n / 2) {

//     return true;
//    }

//    if (a[i] != a[n - i - 1]) {
//    return false;
//    }
//    f(a  , n ,i+1);
    
// }
// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0 ; i == n - i - 1 ;  i++) cin >> a[i];
//     f(a,n,0);
//     for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
    
//     return 0;

// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    //precompute
    map<int , int>mpp;
    for(int i=0 ;i<n;i++){
        mpp[arr[i]]++; //increments through the array
    }

    for(auto it : mpp){
        int maxnum=it.first;
        int maxfreq = it.second;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
    return 0;






}