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
/*
int vectorExample(){

    // Case 1:
    // vector<int> a;
    // a.push_back(1);
    // a.emplace_back(10);
    // cout << a[0] << endl;       
    // cout << a[1] << endl;

    // case 2:
    // vector<pair<int,int>> b;
    // b.push_back({1,5});
    // b.emplace_back(10,20);
    // cout<< b[1].second;
    // cout<<b[0].first;

    // case 3:
    // vector<int> c(5,100);      //it means 5 times 100  {100, 100, 100, 100, 100}
    // vector<int>d(c);         //{100, 100, 100, 100, 100}
    // cout<<c[1]<< endl<<d[2];

    // case 4:
    vector<int> v(4)  //4 is the size of vector it will store garbage value for now


}
int main(){
    vectorExample();
}
*/

//=========================== Itrators=====================
void ItratorExample(){
    vector<pair<int,pair<int,int>>> a;
    a.push_back({20, {10,15}});

    vector<pair<int,pair<int,int>>>::iterator i = a.begin();
    cout << (*i).first << " " << (*i).second.first << " " << (*i).second.second << endl;
    // if we only print i it will only give the memory address not the value stored in it

    /*
        ALTERNATIVES OF a.begin()
            1. a.end() - it will point right after the last elements memory location
                ex:- {20,10,15} a.end will point here {20,10,15}_<--HERE right after 15 if wre do i-- then it will come to 15
            2. a.rend() - it will before starting elelment here-->_{20,10,15}
                it is not used much
            3. a.rbegin(); it will point at the last element {20,10,15}<-- here at 15 if we do i++ then it will come to 10 (we don't use it much)
    */
}

int main(){
    ItratorExample();
}