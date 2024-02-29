#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(string s, int l, int r){

    if(l >= r)
    return true;

    if(s[l] != s[r])
    return false;

    return checkPalindrome(s, l+1, r-1);

}

int main(){

    string s;
    cin >> s;

    cout << checkPalindrome(s, 0, s.size()-1) << endl;

    return 0;

}