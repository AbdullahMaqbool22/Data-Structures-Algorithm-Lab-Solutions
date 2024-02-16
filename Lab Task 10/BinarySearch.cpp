#include <iostream>
#include <conio.h>
using namespace std;
int binarysearch(int start, int end, int arry[], int n)
{
    int mid;
    if (start > end)
        return -1;
    mid = (start + end) / 2;
    if (arry[mid] == n)
        return mid;

    else if (n < arry[mid])
    {
        end = mid - 1;
        return binarysearch(start, end, arry, n);
    }

    else
    {
        start = mid + 1;
        return binarysearch(start, end, arry, n);
    }
}

int main()
{
    int start = 0;
    int end = 9;
    int arry[10];
    int item, n;
    int p = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "enter ur num";
        cin >> arry[i];
    }
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 9; j++)
            if (arry[j] > arry[j + 1])
            {
                item = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = item;
            }
    cout << endl
         << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "ur sorted arry is " << arry[i] << endl;
    }

    cout << endl
         << endl;
    cout << "enter ur num for search";
    cin >> n;

    p = binarysearch(start, end, arry, n);

    if (p == -1)
        cout << " value not found in array";
    else
        cout << n << "value found in arry at index" << p;
    return 0;
}
