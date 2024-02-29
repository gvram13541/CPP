#include <iostream>
#include <vector>

using namespace std;

// void f(vector<int> &arr, vector<int> ds, vector<bool> Mark, int ind){

//     if(ds.size() == arr.size()){
//         for(auto x: ds)
//         cout << x << " ";
//         cout << endl;
//         return;
//     }

//     for(int i = 0; i < arr.size(); i++){

//         if(Mark[i])
//         continue;

//         ds.push_back(arr[i]);
//         Mark[i] = true;

//         f(arr, ds, Mark, i+1);

//         ds.pop_back();
//         Mark[i] = false;

//     }

// }

void f(vector<int> &arr, int ind){

    if(ind == arr.size()){
        for(auto x: arr)
        cout << x << " "; 
        cout << endl;
        return;
    }

    for(int i = ind; i < arr.size(); i++){

        swap(arr[ind], arr[i]);
        f(arr, ind+1);
        swap(arr[ind], arr[i]);

    }

}

int main(){

    int n;
    cin >> n;

    vector <int> v(n), ds;
    vector <bool> Mark(n, false);

    for(int i = 0; i < n; i++)
    cin >> v[i];

    cout << "<<<<<<<<<<---------------------------OUTPUT--------------------------->>>>>>>>>>\n";
    // f(v, ds, Mark, 0);
    f(v, 0);

    return 0;

}