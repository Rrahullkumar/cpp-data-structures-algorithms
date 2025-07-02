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
/*
int arr[6]= {10,5,60,8,20,30};
int grt=arr[0];                                    
int slarge= 0;

int main(){
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" "<<endl;
        if (arr[i]>grt)
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
    cout<<slarge <<" is the second largest";
}
*/

// rveversing an array
/*
int main(){

  int arr[5]= {10,5,60,8,100};
  int narr[5];
    int j=0;
  for (int i =4; i >=0; i--)
  {
    narr[j]= arr[i];
    j++;
  }

  for (int i = 0; i < 5; i++)
  {
    cout<<narr[i]<<" ";
  }
  return 0;

}

*/

// Finding second smallest 
int main(){

  int arr[4]= {10,5,60,8};
  int sml= arr[0];

  int secondSmallest = 0;

  for (int i = 0; i < 4; i++)
  {
    
    if (arr[i]<sml)
    {
      secondSmallest=sml;
      sml= arr[i];
    }
    if (arr[i]<secondSmallest && arr[i] != sml)
    {
      secondSmallest = arr[i];
    }
    
  }
  
  cout<<sml<< "  is the smallest element" <<endl;

  cout<<secondSmallest<<" is the second smallest elem";
}
