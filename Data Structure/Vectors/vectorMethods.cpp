// WAP to understand the methods of dynamic array: vector

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // initializing a vector
    vector <int> v = {2,3,4,5};

    // add elem to last
    v.push_back(6);

    // remove last elem
    v.pop_back();
    
    // access first elem
    cout<< v.front();  // basically like v[0]
    cout<< *v.begin() <<endl; //returns an iterator pointing to the first element.


    // access last elem

    cout<<v.back();
    cout<<*(v.end()-1) <<endl;

    //insertion
    v.insert(v.end()-1,9);



    // print a vector
    for (int num:v){
        cout<<num;
    }

    cout<<endl;


    return 0;
}