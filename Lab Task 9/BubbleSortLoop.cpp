#include <iostream>
using namespace std;
int main()
{
    int a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int hold;
    cout << "Data items in original order\n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (a[j] > a[j + 1])
            {
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
    cout << "\nData items in ascending order\n";
    for (int k = 0; k < 10; k++)
    {
        cout << a[k];
        cout << endl;
    }
    return 0;
}