#include <iostream>
#include <vector>
#include <set>

using namespace std;

void f(vector<int> &arr, int sum, int ind, multiset<int> &s){

    if(ind == arr.size()){
        s.insert(sum);
        return; 
    }

    f(arr, sum+arr[ind], ind+1, s);
    f(arr, sum, ind+1, s);

}

int main(){

    int n;
    cin >> n;

    vector<int> v(n);
    multiset<int> s;

    for(int i = 0; i < n; i++)
    cin >> v[i];

    f(v, 0, 0, s);

    for(auto x:s)
    cout << x << " ";
    cout << endl;

    return 0;

}