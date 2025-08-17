#include<iostream>
#include<utility>
using namespace std;
int main(){
    int arr [5] = {5,2,3,1,7};
    int i = 0, j=4;
    while(i<j){
        swap(arr[i],arr[j]);
        i++; j--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

