// WAP to take inputs on a vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int num;
    cout<<endl<<"Enter 0 to stop !"<<endl;
    do{
        cout<<"Enter a number : ";
        cin>>num;
        if(num!=0){
            v.push_back(num);
        }

    } while (num != 0);

    cout << endl
         << "The elements in vector are: ";
    for (int num : v)
    {
        cout << num << "";
    }

    return 0;
}