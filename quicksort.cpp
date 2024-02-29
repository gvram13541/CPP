#include <iostream>
#include <vector>

using namespace std;

int findPivotIndex(vector <int> &arr, int low, int high){

    int pivot = arr[low];
    int left = low;
    int right = high;

    while((left <= high && right >= low) && (right > left)){

        while(left <= high && pivot >= arr[left])
        left++;

        while(right >= low && pivot < arr[right])
        right--;

        if(right > left)
        swap(arr[left], arr[right]);

    }

    swap(arr[low], arr[right]);

    return right;

}

void quickSort(vector<int> &arr, int low, int high){

    if(low >= high)
    return;

    int pIndex = findPivotIndex(arr, low, high);

    quickSort(arr, low, pIndex-1);
    quickSort(arr, pIndex+1, high);

}

int main(){

    int n;
    cin >> n;
    
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    cin >> v[i];

    quickSort(v, 0, n-1);

    for(int i = 0; i < n; i++)
    cout << v[i] << " ";
    cout << endl;

    return 0;

}