#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int a[100][100];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Transpose:\n";
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++)
            cout << a[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
