#include <iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter any number between 1-7: ";
    cin>>num;
    switch(num){
        case 1:
            cout <<"The day is Sunday"<<endl;
            break;
        case 2:
            cout <<"The day is Monday"<<endl;
            break;
        case 3:
            cout <<"The day is Tuesday"<<endl;
            break;
        case 4:
            cout <<"The day is Wednesday"<<endl;
            break;
        case 5:
            cout <<"The day is Thursday"<<endl;
            break;
        case 6:
            cout <<"The day is Friday"<<endl;
            break;
        case 7:
            cout <<"The day is Saturady"<<endl;
            break;
        
        default:
            cout <<"Enter a number between 1- 7"<<endl;

    }
    return 0;
}