#include<iostream>
using namespace std;
int main(){
    int arr [6]= {1,0,4,0,8,0};
    int zeroIndex=5;

    for(int k=5;k>=0;k--){
        if(arr[k]==0){
            zeroIndex--;
        }else{
            break;
        }
    }
    cout<<zeroIndex<<endl<<endl;
    for(int i=0;i<6;i++){


        if(arr[i]==0){
            arr[i]=arr[zeroIndex];
            arr[zeroIndex] = 0;
                if((zeroIndex -1 )== i){break;}

            zeroIndex--;
        }

    }
    for(int i = 0; i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}