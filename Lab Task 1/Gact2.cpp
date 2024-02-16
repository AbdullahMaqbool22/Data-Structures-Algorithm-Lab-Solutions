#include<iostream>
using namespace std;

int main() {
    int counter = 0; 
    for (int i = 100; i < 1001; i++) {
        if (i % 5 == 0 || i % 6 == 0) {
            cout << i << " ";
            counter++;
            if (counter == 10) {
                cout << endl;
                counter = 0; 
            }
        }
    }
    return 0;
}