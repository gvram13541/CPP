// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// void f(vector<int> &arr, vector<int> ans, int ind, int target, vector<vector<int>> &v){

//     if(target == 0){
//         sort(ans.begin(), ans.end());
//         if(find(v.begin(), v.end(), ans) == v.end())
//         v.push_back(ans);
//         return;
//     }

//     if(ind == arr.size())
//     return;

//     if(arr[ind] <= target){
//         ans.push_back(arr[ind]);
//         target -= arr[ind];
//         f(arr, ans, ind+1, target, v);
//         ans.pop_back();
//         target += arr[ind];
//     }

//     f(arr, ans, ind+1, target, v);

// }


// int main(){

//     int n, k;
//     cin >> n >> k;

//     vector<int> v(n), ans;
//     vector<vector<int>> ds;

//     for(int i = 0; i < n; i++)
//     cin >> v[i];

//     f(v, ans, 0, k, ds);

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

void f(vector<int> arr, vector<int> ds, int ind, int target){

    if(target == 0){
        for(auto x:ds)
        cout << x << " ";
        cout << endl;
        return;
    }

    if(ind == arr.size())
    return;

    for(int i = ind; i < arr.size(); i++){

        if(i > ind && arr[i] == arr[i-1])
        continue;

        if(arr[i] > target)
        break;

        ds.push_back(arr[i]);
        f(arr, ds, i+1, target-arr[i]);
        ds.pop_back();

    }

}

int main(){

    int n, k;
    cin >> n >> k;

    vector<int> v(n), ds;

    for(int i = 0; i < n; i++)
    cin >> v[i];

    sort(v.begin(), v.end());

    f(v, ds, 0, k);

    return 0;

}