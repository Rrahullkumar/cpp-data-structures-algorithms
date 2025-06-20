#include<iostream>
using namespace std;


// void printMyName(string Name){
//     cout<<"Hii I'm "<<Name<<endl;
// }

// int main(){
//     string Name;
//     cin>>Name;
//     printMyName(Name);

//     string name2;
//     cin>>name2;
//     printMyName(name2);

//     return 0;
// }

//============ Take Two numbers and print it's sum=======

// int sum(int a, int b){
//     cout<< a + b <<endl;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;

//     sum(a,b);

//     return 0;
// }

// ==========pass by value==============
// int doingSomething(int num){
//     cout<< num<<endl;
//     num= num+5;
//     cout<<num <<endl;
//     num+=5;
//     cout<<num <<endl;

// }

// int main(){
//     int num;
//     cin>>num;
//     doingSomething(num); //only the copy of original value is passed in the function NOTE: Original value remains the same only the copy will get change in pass by value
//     cout<<num;       //original value remained the same //20

//     return 0;
// }

// =========pass by reference=========

// int increase(int &num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=2;
//     cout<<num<<endl;
// }

// int main(){
//     int num;
//     cin>>num;
//     increase(num);     // symmbol & take the address and to the changes to the original one either it is string, num, array or anything
//     cout<<num;          //original value will be updated
// }

// ==================combining for with array=======

int main(){
    int arr[5];
    for (int i = 0; i <=4; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <=4; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
