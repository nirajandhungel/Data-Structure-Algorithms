#include<iostream>
#include<string>
using namespace std;
string decToBinary(int );
int main (){
    string result = decToBinary(8);
    cout<<result<<endl;
    return 0;
}
string decToBinary(int decNum){
    string result = "";
    while(decNum){
        result = to_string(decNum%2) + result;
        decNum = decNum/2;
    }

   
    return result;

}