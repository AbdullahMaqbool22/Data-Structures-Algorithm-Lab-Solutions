#include<iostream>
using namespace std;
int main(){
    int n = 8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j>=i; j--)
        {
            cout<<" ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout<<k<<" ";
        }
        for (int l = 2; l <= i ; l++)
        {
            if (i!=1)
            {
                cout<<l<<" ";
            }
            
        }
        cout<<"\n";
        
    }
    
}