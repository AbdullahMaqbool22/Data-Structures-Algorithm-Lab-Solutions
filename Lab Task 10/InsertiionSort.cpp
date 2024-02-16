#include <iostream>

using namespace std;
void insertsort(int arry[], int n)
{
    for (int wall = 1; wall < n; wall++)
    {
        for (int i = wall; i > 0; i--)
        {
            if (arry[i] < arry[i - 1])
            {
                int y;
                y = arry[i];
                arry[i] = arry[i - 1];
                arry[i - 1] = y;
            }
            else
                break;
        } 
    }
}

int main()
{

    int n = 10;

    int arry[10];
    for (int j = 0; j < n; j++)
    {
        cout << "enter ur num at index " << j << " = ";
        cin >> arry[j];
    }
    cout << "after insertion sort " << endl
         << endl;

    insertsort(arry, n);

    for (int i = 0; i < n; i++)
    {
        cout << "ur sorted arry is " << arry[i] << endl;
    }

    return 0;
}