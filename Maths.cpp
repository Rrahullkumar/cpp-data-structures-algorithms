#include<iostream>

using namespace std;

int main(){

    // extraction of digits
    int n = 7786;
    int revn=0;
   while (n>0)
   {
    int lstdgt= n%10;
    // cout<<lstdgt;
    n=n/10;
    revn= revn*10+lstdgt;    
   }
   cout<<revn;
   
}
