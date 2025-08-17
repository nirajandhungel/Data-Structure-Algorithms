// WAP to print memory address of array elements

#include<iostream>
using namespace std;
int main (){
    int num [5]={1,2,3,4,5};
    cout<<num<<endl;
    cout<<&num[0]<<endl;  //memory address of first element // base address
    cout<<&num[1]<<endl; //memory address of second element
    cout<<&num[2]<<endl; //memory address of third element
    cout<<&num[3]<<endl; //memory address of fourth element
    return 0;
}