// Program to check whether a character is capital letter or small using type casting

#include<iostream>
using namespace std;
int main (){
    char getChar;
    cout<<"Enter a character: ";
    cin>>getChar;
    int asciiChar = getChar;
    if(asciiChar>=65 && asciiChar<=90){
        cout<<endl<<getChar<<" is an Uppercase.";
    }
    else if (asciiChar>=97 && asciiChar <=122){
        cout<<endl<<getChar<<" is a Lowercase.";

    }
    else{
        cout<<endl<<getChar<<"Only letters are allowed ";

    }
}