#include <iostream>
#include <cmath>

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
/*
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
*/

// Print all divisors
/*
int main()
{
    int n = 36;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i;
        }
    }
}
*/

// check prime
/*
int main(){


    int n=7;
    bool isprime= true;

    for (int i = 2; i*i <= n; i++) //use i <= sqrt(n) for better efficincy or i*i <=n
    {
        if (n%i == 0)
        {
            isprime = false;
        }
    
    }
   cout<<isprime;
}
*/

// GCD/HCF

int main(){

    int n1=12;
    int n2=9;

    int gcd = 0;

    for (int i = 1; i <= min(n1,n2); i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            gcd = i;
        }
        
    }
    cout<<gcd;
    

}
