#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(vector<string> ans){

    for(int i = 0; i < ans.size(); i++){

        string s = ans[i];
        reverse(s.begin(), s.end());

        if(s != ans[i])
        return false;

    }

    return true;

}

void f(vector<string> ans, string s, int ind){

    if(ind == s.size()){

        if(isPalindrome(ans)){
            for(auto str: ans)
            cout << str << ", ";
            cout << endl;
        }

        return;

    }

    for(int i = ind; i < s.size(); i++){
        ans.push_back(s.substr(ind, i-ind+1));
        f(ans, s, i+1);
        ans.pop_back();
    }

}

int main()
{

    string s;

    cin >> s;

    vector<string> cp;

    f(cp, s, 0);

    return 0;
}