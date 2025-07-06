#include<iostream>
#include<cmath>
#include <cstring>
using namespace std;
/*
int main(){

    // palendrome
    char a[] = "level";
    bool isPalindrome = false;

    for (int i = 0; i < 5; i++)
    {
        // cout<<a[i]<<i<<endl;
        if (a[i]==a[5-1-i])
        {
            isPalindrome = true;
        }
        
    }
    cout<<isPalindrome; 
}
*/

// Reversing a string
/*
int main(){

    char str[]= "Rahul";
    int n=strlen(str); 
    int end = n - 1; 

    for (int i = 0; i < end; i++, end--)
    {
        //swapping str[i] with end
        char temp = str[i];
        str[i]=str[end];
        str[end] = temp;
    }
    cout<<str;
}
*/

// frequency of character
/*
int main(){

    string s ="hello";

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int count = 0;

        for (int j = 0; j < s.length(); j++)
        {
            if (ch==s[j])
            {
                count++;
            }
            
        }
        cout<<ch<<":"<<count<<endl;      
    }  
}
*/

// Second last occurance of each character
/*
int main(){


    string s = "aabababab";

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        int last = -1;
        int slast = -1;

        for (int j = 0; j < s.length(); j++)
        {
            if (ch==s[j])
            {
                slast=last;
                last = j;
            }
            
        }
        
        if (slast != 0)
        cout<<"second last occurance of " <<ch << " : " <<slast <<endl;
        else
        cout<<"no second last occurance";
    }
    

}

*/

// >>>>>>>>>>>>>>>>>array<<<<<<<<<<<<<<<<<<
// Finding duplicate elements

int main(){

    int arr[5]= {1,5,3,4,5};
    int j=0;
    bool isDuplicate = false;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]==arr[j])
            {
                isDuplicate =true;
                break;
            }
            
        }     
        
    }

    cout<<isDuplicate; 
}