#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int h, i, j, b[50], k;
    h = low;
    i = low;
    j = mid + 1;

    while (h <= mid && j <= high)
    {
        if (a[h] <= a[j])
        {
            b[i] = a[h];
            h++;
        }
        else
        {
            b[i] = a[j];
            j++;
        }
        i++;
    }
    if (h > mid)
    {
        for (k = j; k <= high; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    else
    {
        for (k = h; k <= mid; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    for (k = low; k <= high; k++)
        a[k] = b[k];
}

void merge_sort(int a[], int left, int right)
{
    if (left - right != 0)
    {
        int mid = (left + right) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

int main()
{
    srand(time(0));
    int a[10];

    for (int i = 0; i <= 9; i++)
        a[i] = rand() % 100;
    for (int i = 0; i <= 9; i++)
        cout << a[i] <<" ";
    cout << endl;
    merge_sort(a, 0, 9);
    for (int i = 0; i <= 9; i++)
        cout << a[i] <<" ";

    getch();
}
