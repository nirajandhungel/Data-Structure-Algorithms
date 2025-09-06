// WAP to reverse a vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v = {1,2,3,4};
    reverse(v.begin(),v.end());
    
    for(int num:v){
        cout<<num<<endl;
    }
    return 0;
}