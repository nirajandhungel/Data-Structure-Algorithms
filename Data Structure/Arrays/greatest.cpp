// wap to find greates element in an array

#include<iostream>
using namespace std;
int main(){
    int num [5] ={4,1,8,2,3};
    int greatest;
    for(int i=0;i<5 ;i++){
        for(int j=i; j<5;j++){
            if(num[i]>num[j]){
                greatest = num[i];

            }
        }
    }
    cout<<greatest<<endl;
    return 0;
}