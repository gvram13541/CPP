#include <iostream>
#include <vector>

using namespace std;

// void f(vector<int> &arr, vector<int> ans, int ind, int target){

//     if(target == 0){
//         for(auto x:ans)
//         cout << x << " ";
//         cout << endl;
//         return;
//     }

//     if(ind == arr.size())
//     return;

//     if(arr[ind] <= target){
//         ans.push_back(arr[ind]);
//         target -= arr[ind];
//         f(arr, ans, ind, target);
//         ans.pop_back();
//         target += arr[ind];
//     }

//     f(arr, ans, ind+1, target);

// }

void f(vector<int> &arr, vector<int> ans, int ind, int target){

    if(target == 0){
        for(auto x:ans)
        cout << x << " ";
        cout << endl;
        return;
    }

    if(ind == arr.size())
    return;

    if(arr[ind] <= target){
        ans.push_back(arr[ind]);
        f(arr, ans, ind, target-arr[ind]);
        ans.pop_back();
    }

    f(arr, ans, ind+1, target);

}

int main(){

    int n, k;
    cin >> n >> k;

    vector<int> v(n), ans;

    for(int i = 0; i < n; i++)
    cin >> v[i];

    f(v, ans, 0, k);

    return 0;

}