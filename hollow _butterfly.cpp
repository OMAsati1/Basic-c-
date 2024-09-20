#include <iostream>
using namespace std;

void printHollowButterfly(int n) {
    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) {
        // Left half
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right half
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower part of the butterfly
    for (int i = n; i >= 1; i--) {
        // Left half
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right half
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printHollowButterfly(n);
    return 0;
}
