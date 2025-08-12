#include <iostream>
using namespace std;
int main (){

    int num = 5, temp = num, fact =1;
    do{
        fact =  fact *temp;
        temp--;

    }while(temp>0);

    cout<<"The factorial of "<<num <<" is "<<fact<<endl;
    return 0;
}