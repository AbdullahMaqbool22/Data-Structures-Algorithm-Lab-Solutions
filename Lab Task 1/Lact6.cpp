#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a value:\n";
    cin>>x;
    if (x>0)
        cout << "x is positive";
    else if (x<0)
        cout << "x is negative";
    else
        cout<<"x is 0";
    return 0;
    
}