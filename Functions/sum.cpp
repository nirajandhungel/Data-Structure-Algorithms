#include<iostream>
using namespace std;
int sum(int a, int b);

int main(){
    int result = sum(3,4);
    cout<<result<<endl;
    return 0;
}
int sum (int a, int b){
    return a+b;
}