#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << "";
        }
        cout << "\n";
    }

    return 0;
}