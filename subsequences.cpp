#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// void powerSet(vector<int> v){

//     for(int i = 0; i < pow(2, v.size()); i++){
//         for(int j = 0; j < v.size(); j++){
//             if(i & (1 << j))
//             cout << v[j];
//         }
//         cout << endl;
//     }

// }

void subsequences(vector <int> &arr, vector<int> v, int index){

    if(index >= arr.size()){
        for(auto x:v)
        cout << x << " ";
        cout << endl;
        return;
    }

    v.push_back(arr[index]);
    subsequences(arr, v, index+1);
    v.pop_back();
    subsequences(arr, v, index+1);

}

int main(){

    int n;
    cin >> n;

    vector <int> arr(n), v;

    for(int i = 0; i < n; i++)
    cin >> arr[i];

    cout << "<<<<<<<<<<---------------------------OUTPUT--------------------------->>>>>>>>>>\n";
    // powerSet(arr);
    subsequences(arr, v, 0);

    return 0;

}