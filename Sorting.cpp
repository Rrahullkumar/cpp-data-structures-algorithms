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