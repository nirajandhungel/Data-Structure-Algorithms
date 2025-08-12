#include<iostream>
using namespace std;

// Type Casting manually done by programmer assigning  bigger DT to smaller data type
int main () {
     double doubleNum = 12345678.90; //8 byte
     int intNum = (int)doubleNum;
     cout<<intNum<<endl;

    return 0;
}