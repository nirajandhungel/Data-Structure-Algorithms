// Find the first diviser of  user input between 1 and 100 using a loop with break.

#include <iostream>
using namespace std;
int main (){
    int num, answer ;
    cout<<"Enter a number between 2-100 : ";
    cin>>num;
    for (int i = 2; i<100;i++){
 
        if(num%i == 0){
            answer = i;
            break;
        }

    }

    cout<<answer<<" is the first divisor"<<endl;
    return 0;
}