// WAP using vector

#include<iostream>
#include<vector>
using namespace std;
int main (){

    vector<int> x;
    vector<int> y = {7,6,5,4,3};
    vector<int> z(3,0);

    cout<<endl<<"Elements of vector y: "<<endl;
    cout<<y[0]<<endl;
    cout<<y[1]<<endl;
    cout<<y[2]<<endl;


    cout<<endl<<"Elements of vector z: "<<endl;
    cout<<z[0]<<endl;
    cout<<z[1]<<endl;
    cout<<z[2]<<endl;
    return 0;
}