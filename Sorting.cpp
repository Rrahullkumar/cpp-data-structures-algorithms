#include<iostream>

using namespace std;

// Selection sort
/*
int main(){

    int arr[6] = {10,50,20,30,15,25};

    int n = 6;

    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i; j < n-1; j++)
        {
            if (arr[j]<arr[min])
            {
                int temp = arr[min];
                arr[min] =arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < n-1; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
*/

// Bubble sort : Push the maximum to the last by adjecent swaps
/*
int main(){

    int arr[6] = {10,50,20,30,15,25};

    int n= 6;

    for (int i = n-1; i >=1; i--)
    {
        for (int j = 0; j <= i-1 ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
*/

// Insertion sort:  Takes an element and places it in it's correct position
/*
int main(){

    int arr[6] = {12,5,30,60,10,15};

    int n= 6;

    for (int i = 0; i < n; i++)
    {
        int j=i;
        while (j>0 && arr[j-1] > arr[j])
        {
            int temp = arr[j];
            arr[j]= arr[j-1];
            arr[j-1]= temp;
            j--;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }   
}
*/

// Merge sort :  Divide and merge

// Merge two sorted parts
void merge(int arr[], int low, int mid, int high) {
    int leftSize = mid - low + 1;
    int rightSize = high - mid;

    int left[leftSize], right[rightSize];

    // Copy elements in left[]
    for (int i = 0; i < leftSize; i++)
        left[i] = arr[low + i];

    // Copy elements in right[]
    for (int j = 0; j < rightSize; j++)
        right[j] = arr[mid + 1 + j];

    // Merge logic
    int i = 0, j = 0, k = low;

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    // Copy remaining left
    while (i < leftSize)
        arr[k++] = left[i++];

    // Copy remaining right
    while (j < rightSize)
        arr[k++] = right[j++];
}

// Merge Sort Recursive
void mergeSort(int arr[], int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2; // ✅ Mid calculated your way

    mergeSort(arr, low, mid);       // Sort left
    mergeSort(arr, mid + 1, high);  // Sort right
    merge(arr, low, mid, high);     // Merge both
}

int main() {
    int arr[] = {10, 5, 30, 15, 7, 60, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

