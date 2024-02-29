#include <iostream>
#include <bits/stdc++.h>

using namespace std;


// void print1ToN(int i, int n){

//     if(i > n)
//     return;

//     cout << i << endl;

//     print(i+1, n);

// }

void printNTo1(int i, int n){
    if(i > n)
    return;
    printNTo1(i+1, n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;

    cout << "<<<<<<<<<<---------------------------OUTPUT--------------------------->>>>>>>>>>\n";
    printNTo1(1, n);
    return 0;
}