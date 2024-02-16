#include<iostream>
using namespace std;
int main(){
    int num1 = 0, num2 = 1, n;
    cout<<"Enter a limit number:\n";
    cin>>n;
    cout<<num1<< " " << num2;
    for (int i = 0; i < n-2; i++)
    {
        int newnum = num1 + num2;
        cout<<" "<<newnum;
        num1 = num2;
        num2 = newnum;
    }
    


    return 0;
}