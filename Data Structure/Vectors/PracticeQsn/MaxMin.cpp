#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int min = INT_MAX;
    int max = INT_MIN;
    vector <int> v = {3,1,4,7,8};

    for(int num : v){
        if(num>max){
            max = num;
        }
        if(num<min){
            min = num;
        }
    }

    cout <<endl<<"Max ="<<max<<" Min = "<<min<<endl;
    


    return 0;
}