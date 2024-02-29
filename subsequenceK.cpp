#include <iostream>
#include <vector>

using namespace std;

// void subsequencesWithSumK(vector<int> &arr, vector<int> v, int ind, int sum, int k){

//     if(sum > k)
//     return;

//     if(sum == k){
//         for(auto x:v)
//         cout << x << " ";
//         cout << endl;
//         return;
//     }

//     if(ind >= arr.size())
//     return; 

//     v.push_back(arr[ind]);
//     sum = sum + arr[ind];
//     subsequencesWithSumK(arr, v, ind+1, sum, k);
//     v.pop_back();
//     sum = sum - arr[ind];
//     subsequencesWithSumK(arr, v, ind+1, sum, k);

// }

// bool subsequenceWithSumK(vector<int> &arr, vector<int> v, int ind, int sum, int k){

//     if(sum > k)
//     return false;

//     if(sum == k){
//         for(auto x:v)
//         cout << x << " ";
//         cout << endl;
//         return true;
//     }

//     if(ind >= arr.size())
//     return false; 

//     v.push_back(arr[ind]);
//     sum = sum + arr[ind];
//     if(subsequenceWithSumK(arr, v, ind+1, sum, k))
//     return true;
//     v.pop_back();
//     sum = sum - arr[ind];
//     if(subsequenceWithSumK(arr, v, ind+1, sum, k))
//     return true;

//     return false;

// }

int totalSubsequencesWithSumK(vector<int> &arr, int ind, int sum, int k){

    if(sum > k)
    return 0;

    if(sum == k)
    return 1;

    if(ind >= arr.size())
    return 0; 

    sum = sum + arr[ind];
    int pick = totalSubsequencesWithSumK(arr, ind+1, sum, k);
    sum = sum - arr[ind];
    int notPick = totalSubsequencesWithSumK(arr, ind+1, sum, k);

    return pick+notPick;

}

int main(){

    int n, k;
    cin >> n >> k;

    vector <int> arr(n), v;

    for(int i = 0; i < n; i++)
    cin >> arr[i];

    cout << "<<<<<<<<<<---------------------------OUTPUT--------------------------->>>>>>>>>>\n";
    // subsequencesWithSumK(arr, v, 0, 0, k);
    // subsequenceWithSumK(arr, v, 0, 0, k);
    cout << totalSubsequencesWithSumK(arr, 0, 0, k);

    return 0;

}