#include<iostream>
using namespace std;

//type cnversion automatically done assigning smaller datatype to bigger datatype
int main (){
    char letter = 'A'; //char smaller DT
    int num = letter; //int bigger DT
    cout <<num<<endl;
    return 0;
}