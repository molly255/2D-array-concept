#include <iostream>
using namespace std;

int main() {
    int r, c, sum = 0;
    cin >> r >> c;
    int a[100][100];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
                sum += a[i][j];
        }

    cout << "Boundary Sum = " << sum;
    return 0;
}
