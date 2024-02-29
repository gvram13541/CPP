// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// void f(vector<int> &arr, vector<int> ans, int ind, vector<vector<int>> &v){

//     if(ind == arr.size()){
//         sort(ans.begin(), ans.end());
//         if(find(v.begin(), v.end(), ans) == v.end())
//         v.push_back(ans);
//         return;
//     }

//     ans.push_back(arr[ind]);
//     f(arr, ans, ind+1, v);
//     ans.pop_back();
//     f(arr, ans, ind+1, v);

// }


// int main(){

//     int n;
//     cin >> n;

//     vector<int> v(n), ans;
//     vector<vector<int>> ds;

//     for(int i = 0; i < n; i++)
//     cin >> v[i];

//     f(v, ans, 0, ds);

//     for(auto x: ds){
//         for(auto k: x)
//         cout << k << " ";
//         cout << endl;
//     }

//     return 0;

// }


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void f(vector<int> &arr, vector<int> ds, int ind){

    for(auto x:ds)
    cout << x << " ";
    cout << endl;

    if(ind == arr.size())
    return;

    for(int i = ind; i < arr.size(); i++){

        if(i > ind && arr[i] == arr[i-1])
        continue;

        ds.push_back(arr[i]);
        f(arr, ds, i+1);
        ds.pop_back();

    } 

}

int main(){

    int n;
    cin >> n;

    vector <int> v(n), arr;

    for(int i = 0; i < n; i++)
    cin >> v[i];

    f(v, arr, 0);

    return 0;

}