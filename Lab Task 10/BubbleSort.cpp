#include <iostream>
using namespace std;

int main()

{
    const int arraySize = 10; // size of array a

    int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    int hold; // temporary location used to swap arrayelements

    cout << "Data items in original order\n";

    // output original array

    for (int i = 0; i < arraySize; i++)

        cout << a[i];

    // bubble sort

    // loop to control number of passes

    for (int pass = 0; pass < arraySize - 1; pass++)

        // loop to control number of comparisons per pass

        for (int j = 0; j < arraySize - 1; j++)

            // compare side-by-side elements and swap them if

            // first element is greater than second element

            if (a[j] > a[j + 1])
            {

                hold = a[j];

                a[j] = a[j + 1];

                a[j + 1] = hold;

            } // end if

    cout << "\nData items in ascending order\n";

    // output sorted array

    for (int k = 0; k < arraySize; k++)

        cout << a[k];

    cout << endl;

    return 0; // indicates successful termination

} // end main