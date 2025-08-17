#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,4,2,3,3};
    
    cout << "Repeated elements: ";
    for(int i=0; i<5; i++){
        bool repeated = false;
        // check if arr[i] was already printed
        for(int k=0; k<i; k++){
            if(arr[i] == arr[k]){
                repeated = true;
                break;
            }
        }
        if(repeated) continue;

        // check if arr[i] appears later
        for(int j=i+1; j<5; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                break;
            }
        }
    }
    return 0;
}
