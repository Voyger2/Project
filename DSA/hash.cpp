//NUMBERS HASHING
/*#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){ 
    cin >> arr[i];
    }
    // precompute
    int hash[5] = {0};
    for(int i = 0 ; i<n ; i++) {
        hash[arr[i]] += 1; // we have to go to the index and add one such as from 0 to 1 and so on
    
    }
    //fetch
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;

    }
    return 0;
}*/

// CHARACTERS HASHING
/*#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  
  //precompute
  int hash[25] = {0};
  for(int i=0 ; i<s.size() ; i++){
    hash[s[i] - 'a']++; // Moving ahead from 0 to 1 simultaneously
  }
  
  //fetch
  int q;
  cin >> q;
  while(q--){ // q stands for queries which are needed
  char c;
  cin >> c;
  cout << hash[c-'a'] << endl; // make sure to add cout 
    
  }
  return 0;
}*/

// Map
/* #include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0 ;i<n ; i++){
    cin >> arr[i];
  }
  //pre compute
  map<int , int> mpp;
  for(int i=0 ; i<n ; i++){
    mpp[arr[i]]++;
  }


  int q;
  cin >> q;
  while (q--){
    int number;
    cin >> number;
    //fetch
  cout << mpp[number] << endl;
  }
  
  
  return 0;
}

 */
// Character mapping
#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  
  //precompute
  map<char , int> mpp;
  for(int i = 0 , i<s.size() , i++){
    mpp[s[i]]++;
  }
  
  //fetch
  int q;
  cin >> q;
  while(q--){ // q stands for queries which are needed
  char c;
  cin >> c;
    cout << mpp[c] << endl;
    
  }
  return 0;}
  int main <iostream>
  using namespace std:
  int main(){
    int n;
    cin >> n;
  int arr[n];
  for(int i = 0 ; i<n ; i++){
 arr[n]
  }
  }