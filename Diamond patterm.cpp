#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    // Print the upper half of the diamond
    for (int i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print the lower half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces before the stars
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
