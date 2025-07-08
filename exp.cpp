#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
/*
int main(){

    // palindrome
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
/*
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

*/

// Finding second largest element in an array
/*
int main(){

    int arr[5] ={10,50,40,20,30};
    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < 5; i++)
    {
        if (arr[i]>largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        if (arr[i]!=largest && arr[i]>secondLargest)
        {
            secondLargest= arr[i];
        }


    }

    cout<<largest<<" is the largest"<<endl;
    cout<< secondLargest <<" is the second largest"<<endl;

}
*/

// Rotation of an array
/*
int main(){

    int arr[5] ={1,2,3,4,5};
    int n=5;
    int j=0;
    int temp = arr[0];

    for (int i = 1; i < n; i++, j++)
    {
        arr[j]= arr[i];
    }
    arr[4]= temp;

    for (int k = 0; k < n; k++)
    {
        cout<<arr[k];
    }
}
*/

#include <algorithm> // For reverse
/*
int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}
    };

    int n = 4;

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i], matrix[i] + n);
    }

    // Print the rotated matrix
    cout << "Rotated Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

// palindrome
/*
int main(){
    string s= "level";
    bool isPalindrome = true;
    int length = s.length();

    for (int i = 0; i <length; i++)
    {
        if (s[i] != s[length-1-i])
        {
            isPalindrome = false;
        }
        
    }
    cout<<isPalindrome<<endl;
    cout<<length;
}
*/

// reversing string
/*
int main(){

    string s= "asdfghjkl";
    int n = s.length();
    int end = n-1;

    for (int i = 0; i < n/2 ; i++, end--)
    {
        char temp = s[i];
        s[i] = s[end];
        s[end]= temp;
        
    }
    cout<<s;

}
*/


// more interview question below