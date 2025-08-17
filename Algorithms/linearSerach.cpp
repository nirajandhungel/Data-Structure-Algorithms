#include<iostream>
using namespace std;
int linearSearch(int arr[], int length ,int target);
int main (){
    int arr [6] = {2,6,1,8,9,3};
    int result = linearSearch(arr,6,5);
    cout<<result<<endl;
    return 0;
}

int linearSearch(int arr[], int length ,int target){  // Two way search faster from both sides
    int i=0, j=length-1;
    while(i<=j){
        if(arr[i]==target) return i;
        if(arr[j]==target) return j;
        i++;j--;
    }
    return -1; // if not found, worst time complexity


}