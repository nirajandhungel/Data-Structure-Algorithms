// WAP to merge 2 vectors in first vecotr

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v1 = {1,2,3};
    vector <int> v2 = {4,5,6};

    // easy way

    v1.insert(v1.end(), v2.begin(), v2.end());

    //custom way
    // for(int num: v2){
    //     v1.push_back(num);
    // }

    for(int num :v1){
        cout<<num<<endl;
    }
    return 0;
}