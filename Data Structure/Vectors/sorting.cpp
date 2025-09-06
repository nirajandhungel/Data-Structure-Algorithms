// wap to sort a vector using built in function
#include<iostream>
#include<vector>
#include <algorithm> // for sort algorithm
using namespace std;


int main(){
    vector <int> v = {2,5,1,3,4};
    sort(v.begin(), v.end() );
    for(int num:v){
        cout<<num<<endl;

    }
    return 0;
}