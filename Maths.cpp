#include<iostream>
#include<math.h>

using namespace std;

/*
int main(){

    // extraction of digits
    int n = 121;
    int revn=0;

    int dup =n;
   while (n>0)
   {
    int lstdgt= n%10;
    // cout<<lstdgt;
    n=n/10;
    revn= revn*10 + lstdgt;    
   }
   cout<<revn <<endl;
   
//    for checking palindrome
   if (dup == revn)
   {
    cout<< "True";
   } else{
    cout<<"False";
   }
   
   
}
*/

// armstrong number
int main(){
    int n=1634;
    int sum =0;
    int dup = 1634;

    while(n>0)
    {
        int ld = n%10;
        sum = sum+ pow(ld,4);
        n=n/10;
    }
    // cout<<sum;
    if (sum == dup)
    {
        cout<<"It is a armstrong number";
    } else {
        cout<<"It is not a armstrong number";
    }
    
}