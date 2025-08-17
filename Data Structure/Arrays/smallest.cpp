// wap to find smallest element using climits INT_MAX or INT_MIN in an array

#include<iostream>
#include <climits>
using namespace std;
int main(){
    int smallest = INT_MAX;
    int arr [6] = {6,1,-9,7,8,-2};
    for(int i =0; i<6;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<smallest<<endl;

    // int minVal = INT_MIN;


    return 0;
}