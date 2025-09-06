// WAP to remove duplicates

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={6,4,3,6,3};

    cout<<v.size();
    for(int i=0;i<v.size();i++){
        for(int j=i+1; j<v.size();j++){
            if(v[i]==v[j]){
                v.erase(v.begin()+j);
            }
        }
 
    }

    cout<<endl<<"The elements in vector are: "<<endl;
    for(int num: v){
        cout<<num<<" ";
    }
    return 0;
}