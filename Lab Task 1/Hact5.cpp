#include <iostream>
using namespace std;
int main()
{
    int array[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n;
    // Insert the value at end of the list
    // cout << "Insert a value at end of the list:\n";
    // for (int i = 0; i < 15; i++)
    // {
    //     if (array[i] == 0)
    //     {
    //         cin >> array[i];
    //         break;
    //     }
    // }
    // cout<<"Insert a value at start of the list:\n";
    // for (int i = 0; i < 15; i++)
    // {
    //     cin>>array[0];
    //     break;
    // }
    cout << " Insert the value before specific value:\n";
    cin >> n;
    for (int i = 0; i < 15; i++)
    {
        array[i] = n;
        break;
    }

    for (int i = 0; i < 15; i++)
    {
        cout << array[i] << " ";
    }

    for (int i = 0; i < 15; i++)
    {
        
    }
    
    return 0;
}