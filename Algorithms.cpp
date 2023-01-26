// <============ TWO POINTER ALGORITHM ==============>

//1. An alogorithm to remove duplicate elements in the sorted array.

int remove_duplicate(int a[],int n){
        int i = 0;
        for(int j = 1; j < n; j++){
            if(a[j] != a[i]){
                i++;
                a[i] = a[j];
            }
        }
        return i+1;
}

// 2. An algorithm to find union of two sorted arrays.

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}

/* This is an implementation of the Two Pointers algorithm for removing duplicates from an array. The algorithm uses two pointers, one (i) to iterate 
through the array, and another (j) to check for duplicates. If a duplicate is found, it is skipped, and if a unique element is found, it is placed in the 
next position of the array (i+1) and the i pointer is incremented. Finally, the function returns the new length of the array after duplicates have been 
removed. */

// 2. Left rotate the array

void leftRotate(int arr[], int n, int d) {
        int new_arr[n];
        for(int i = 0; i < n; i++)
        new_arr[i] = arr[(i+d) % n];
        for(int i = 0; i < n; i++)
        arr[i] = new_arr[i];
}
