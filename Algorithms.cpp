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

/* This is an implementation of the Two Pointers algorithm for removing duplicates from an array. The algorithm uses two pointers, one (i) to iterate 
through the array, and another (j) to check for duplicates. If a duplicate is found, it is skipped, and if a unique element is found, it is placed in the 
next position of the array (i+1) and the i pointer is incremented. Finally, the function returns the new length of the array after duplicates have been 
removed. */
