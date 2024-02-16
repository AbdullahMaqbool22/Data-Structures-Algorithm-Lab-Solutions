#include <iostream>
#include <string>
using namespace std;
void re(string a[], int b[])
{
    string temp = "";
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if ((b[i] + 1) < (b[i] - 1))
        {
            count += b[i];
            cout << "Name: " << a[i] << "Marks: " << count << " ";
            break;
        }
    }
}
int main()
{
    string name[10];
    int score[10];
    cout << "Enter The name of the student:\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> name[i];
    }
    cout << "Enter the score\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> score[i];
    }
    re(name, score);

    return 0;
}