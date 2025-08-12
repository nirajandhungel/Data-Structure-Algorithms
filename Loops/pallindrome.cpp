#include<iostream>
#include<string>
using namespace std;
int main (){
    int num = 323, tempNum = num, reverseNum = 0;
    int lastDigit;
    while(tempNum){
        lastDigit = tempNum % 10;
        reverseNum = reverseNum*10+lastDigit;
        tempNum = tempNum/10;
    }
    string stat = (num == reverseNum)?"Yes, "+ to_string(num)+ " is a Pallindrome":"No, "+ to_string(num)+" is not a pallidrome.";
    cout<<endl<<stat<<endl;
    

    return 0;
}