#include <iostream>
#include <vector>

using namespace std;

/*
void fun(){
    cout<<"Rahul";              //void fun won't return anything
}
int sum(int a, int b){
    return a+b;
}


int main(){
    fun();
    cout<<sum(10,10);
    return 0;
}
*/

// C++ STL is devided into four parts
/*
    1.Algorithms
    2.Containers
    3.Functions
    4.Iterators
*/

// Pairs
/*
void pairsExamples(){
    // pair<int , int >a = {1,5};
    // cout<<a.first <<a.second;

    // case 2:
    // pair<int,pair<int, int>>b = {1 , {10, 20}};
    // cout<<b.second.first <<" "<<b.second.second;

    // case 3:
    // pair<int ,int> arr[]= {{1,2}, {5,6} ,{7,3}};
    // cout<<arr[1].second <<" " <<arr[2].first << " "<< arr[0].second;
}

int main(){
    pairsExamples();
}
*/


// Vectors
int vectorExample(){

    // Case 1:
    // vector<int> a;
    // a.push_back(1);
    // a.emplace_back(10);
    // cout << a[0] << endl;       
    // cout << a[1] << endl;

    // case 2:
    vector<pair<int,int>> b;
    b.push_back({1,5});
    b.emplace_back(10,20);
    cout<< b[0].first;
}
int main(){
    vectorExample();
}
