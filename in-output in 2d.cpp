#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int a[100][100];

    // Input
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    // Output
    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
