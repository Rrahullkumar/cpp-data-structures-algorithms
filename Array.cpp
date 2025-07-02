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
/*
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
*/

// Checking if an array is sorted or not
/*
int main(){

  int arr[5]= {1,2,1,4,1};
  bool isSorted= true;

  for (int i = 0; i < 4; i++)
  {
    // cout<<arr[i] << " ";

    if (arr[i]>arr[i+1])
    {
      isSorted= false;
      break;
    }  
    
  }
  cout<< isSorted<<" ";

}
*/

// Remove duplicates from an given sorted array without making new array
// two pointer approach
int main(){

  int arr[8] ={ 1,2,2,3,3,3,1,1};
  int i= 0;

  for (int j = 1; j < 8; j++)
  {
    if (arr[i]!= arr[j])
    {
      arr[i+1] = arr[j];
      i++;
    }
  }
  cout<<arr[0]<<" " <<arr[1]<< " "<<arr[2] <<endl;     //rest will be the random reamining elements

  for (int k = 0; k < i; k++)
  {
    cout<<arr[k];
  }
  
}

