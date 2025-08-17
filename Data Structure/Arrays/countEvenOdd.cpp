#include<iostream>
using namespace std;
int main(){

    int arr[5]= {2,1,4,7,8};
    int odd=0, even=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Even: "<<even<<" Odd: "<<odd<<endl;
    return 0;
}