// P-1 Largest element in an array
#include<iostream>
#include<cmath>
using namespace std;

/*
int arr[4]= {10,5,60,8};
int grt=arr[0];
int main(){
    for (int i = 1; i < 4; i++)
    {
        cout<<arr[i]<<" "<<endl;
        if (arr[i]>arr[0])
        {
            grt = arr[i];
        }
        
    }

    cout<<grt<<" is the greatest in the given array";
}
*/

// finding second largest in an array
int arr[5]= {10,5,60,8,100};
int grt=arr[0];
int slarge= -1;

int main(){
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" "<<endl;
        if (arr[i]>arr[0])
        {
            slarge = grt;
            grt = arr[i];
            
        }
        if (arr[i]>slarge && arr[i]!=grt)
        {
            slarge= arr[i];
        }
        
        
    }

    cout<<grt<<" is the greatest in the given array"<<endl;
    cout<<slarge;
}