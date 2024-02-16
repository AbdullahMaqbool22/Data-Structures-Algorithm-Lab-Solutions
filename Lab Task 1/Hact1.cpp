#include <iostream>
using namespace std;

// Pattern 1
// 1 2 3 4
// 1 2 3
// 1 2
// 1

void pat1()
{

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j;
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 2
//    1
//   12
//  123
// 1234

void pat2()
{

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j < rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << k + 1;
        }
        cout << "\n";
    }
}

// Pattern 3
// 1234
//  234
//   34
//    4

void pat3()
{

    int space, rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        // print spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // print stars
        for (int j = i; j < rows; j++)
        {
            cout << j + 1;
        }
        cout << "\n";
    }
}

// Pattern 4
//      1
//     1 2 1
//   1 2 4 2 1
// 1 2 4 8 4 2 1

void pat4()
{

    int space, rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << (1 << j) << " ";
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << (1 << j) << " ";
        }

        cout << '\n';
    }
}

int main()
{
    // pat1();
    // pat2();
    // pat3();
    pat4();
    return 0;
}