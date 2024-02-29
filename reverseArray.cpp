#include <iostream>
#include <vector>

using namespace std;

void reverseAnArray(vector <int> &v, int i){
    if(i >= v.size()/2)
    return;

    swap(v[v.size()-i-1], v[i]);
    reverseAnArray(v, i+1);

}

int main(){
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0; i < n; i++)
    cin >> v[i];

    reverseAnArray(v, 0);

    for(int i = 0; i < n; i++)
    cout << v[i] << " ";
    cout << endl;

    return 0;
}