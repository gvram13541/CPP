#include <iostream>
#include <vector>

using namespace std;

// void merge(vector<int> &arr, int low, int mid, int high){

//     vector<int> temp;
//     int left = low;
//     int right = mid+1;

//     while(left <= mid && right <= high){

//         if(arr[left] <= arr[right])
//         temp.push_back(arr[left++]);
        
//         else
//         temp.push_back(arr[right++]);

//     }

//     while(left <= mid)
//     temp.push_back(arr[left++]);

//     while(right <= mid)
//     temp.push_back(arr[right++]);

//     for(int i = 0; i < temp.size(); i++)
//     arr[low+i] = temp[i];
    
// }

// void merge(vector<int> &arr, int low, int mid, int high){

//     vector<int> temp;
//     int left = low;
//     int right = mid+1;

//     while(left <= mid && right <= high)
//     if(arr[left] >= arr[right])
//     temp.push_back(arr[left++]);
//     else
//     temp.push_back(arr[right++]);

//     while(left <= mid)
//     temp.push_back(arr[left++]);

//     while(right <= mid)
//     temp.push_back(arr[right++]);

//     for(int i = 0; i < temp.size(); i++)
//     arr[low+i] = temp[i];
    
// }

void merge(vector<char> &arr, int low, int mid, int high){

    vector<char> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high)
    if(arr[left] >= arr[right])
    temp.push_back(arr[left++]);
    else
    temp.push_back(arr[right++]);

    while(left <= mid)
    temp.push_back(arr[left++]);

    while(right <= mid)
    temp.push_back(arr[right++]);

    for(int i = 0; i < temp.size(); i++)
    arr[low+i] = temp[i];
    
}

void mergeSort(vector<char> &arr, int low, int high){

    if(low >= high)
    return;

    int mid = (low+high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);

}

// void mergeSort(vector<int> &arr, int low, int high){

//     if(low >= high)
//     return;

//     int mid = (low+high)/2;

//     mergeSort(arr, low, mid);
//     mergeSort(arr, mid+1, high);
//     merge(arr, low, mid, high);

// }

int main(){

    int n;
    cin >> n;

    vector <char> v(n);

    for(int i = 0; i < n; i++)
    cin >> v[i];

    mergeSort(v, 0, n-1);

    for(int i = 0; i < n; i++)
    cout << v[i] << " ";
    cout << endl;

    return 0;

}