//WAP to reverse a number

#include<iostream>
#include<string>
using namespace std;
int main (){

    int num = 234, tempNum=num, reverseNum=0;
    string stringOfNum = to_string(num);
    int len = stringOfNum.length();
    for(int i =0;i< len; i++){
        int lastDigit = tempNum%10;
        reverseNum = reverseNum * 10 +lastDigit;
        tempNum /=10;

    }

    cout<<endl<<"The reverse of "<<num<<"is "<<reverseNum<<endl; 
    return 0;
}