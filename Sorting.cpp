#include<iostream>

using namespace std;

// Selection sort
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