// 10 fibonacci numbers

#include<iostream>
using namespace std;
int main (){

    int value=0,counter1 =0 , counter2=1;
    for(int i =0;i<10;i++){ //mylogic

        value = value+counter1;
        counter1= counter2;
        counter2 = value;
        cout<<value<<"\t";

    }
    int next =0, a =0, b=1;
    cout<<endl;
    for(int i =0;i<10;i++){ //chatgpt logic

        cout<<a<<"\t";
        next= a+b;
        a= b;
        b = next;

    }
    return 0;
}