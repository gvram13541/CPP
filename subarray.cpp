#include <iostream>

using namespace std;

// void printSubarrays(string s){

//     for(int i = 0; i < s.size(); i++)
//     for(int j = i; j < s.size(); j++)
//     cout << s.substr(i, j-i+1) << endl;

// }

void printSubarraysRecursion(string s, int l, int r){

    if(l >= s.size())
    return;

    if(r >= s.size()){
        l++;
        r = l;
    }

    cout << s.substr(l, r-l+1) << endl;

    printSubarraysRecursion(s, l, r+1);

}

int main(){

    string s;
    cin >> s;
     
    // printSubarrays(s);

    printSubarraysRecursion(s, 0, 0);

    return 0;
}