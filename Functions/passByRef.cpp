#include<iostream>
using namespace std;
void changeValue(int &x);
int main(){
    int num = 10    ;
    changeValue(num);
    cout<<num<<endl;
    return 0;

}

void changeValue(int &x){
    x = x-5;
}