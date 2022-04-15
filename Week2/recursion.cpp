#include<bits/stdc++.h>
using namespace std;

int fib1 (int n) {
    // recursion element
    if (n == 1){
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fib1(n-1) + fib1(n-2);
}

int fib2 (int n){
    int f = 0, s = 1, next = 1;
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else {
        for (int i=2; i<n; i++) {
            next = f + s;
            f = s;
            s = next;
        }
    }
    return next;
}
// void printFibonacci(int n){    
//     static int n1=0, n2=1, n3;    
//     if(n>0){    
//          n3 = n1 + n2;    
//          n1 = n2;    
//          n2 = n3;    
//  cout<<n3<<" ";    
//          printFibonacci(n-1);    
//     }    
// }    
void fib_ser1 (int n) {
    // recursion 
   static  int n1 = 0, n2=1, n3;
    if (n>0){
        n3 = n1 + n2;
        n1= n2;
        n2= n3;
        cout << n3 << endl;
          fib_ser1(n-1); 
    }
  
}

void fib2_ser (int n){
    int f = 0, s = 1, next = 1;
    cout << f << endl;
    cout << s << endl;
    for (int i=2; i<n; i++) {
            next = f + s;
            cout <<next<<endl;
            f = s;
            s = next;
        }
}


// int fi (int arr[], int size, int x) {
//     if (size <= 0) {
//         return -1;
//     }
//     if (arr[0] == x){
//         return 0;
//     }
//     int prev = fi (arr +1 , size-1, x);
//     return ((prev == -1 ) ? -1 : prev +1);
// }

// int li(int arr[], int size, int x) {
//     if (size <= 0) {
//         return -1;
//     }
//     if (arr[size-1] == x){
//         return size-1;
//     }
//     return li (arr , size-1, x);
//     // return ((prev == -1 ) ? -1 : prev+1);
    
// }


#include<bits/stdc++.h>
using namespace std;

vector<int> AInd( int arr[], int size, int x) {
    vector <int> ans;
    if(size <=0) return ans;
    if(arr[size-1] == x){
      ans.push_back(size-1);
      
    }
    AInd(arr, size-1, x);
    return ans;
}

int main(){
  int n, num;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++){
       cin>>arr[i];
  }
  cin>>num;
 AInd(arr, n, num);


return 0;
}


// neww
#include<iostream>    
using namespace std;      
void printFibonacci(int n){    
    static int n1=0, n2=1, n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
 cout<<n3<<" ";    
         printFibonacci(n-1);    
    }    
}    
int main(){    
    int n;    
    cout<<"Enter the number of elements: ";    
    cin>>n;    
    cout<<"Fibonacci Series: ";    
    cout<<"0 "<<"1 ";  
    printFibonacci(n-2);  //n-2 because 2 numbers are already printed    
     return 0;  
}  
/////////////example

int main(){
  int n;
  cin>>n;
  cout << "0" <<endl << "1"<<endl;
  fib_ser1(n-2);
  //cout<< "second"<< endl;
 // fib2_ser(n);
//   int no;
//   cin>> no;
//   int arr[n];
//   for(int i = 0; i < n; i++){
//        cin>>arr[i];
//   }
// // cout<<fi(arr, n, no);
// cout<< li(arr, n, no);
return 0;
}