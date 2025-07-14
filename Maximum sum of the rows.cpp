#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int a[100][100];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    int maxSum = 0, rowIndex = 0;

    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++)
            rowSum += a[i][j];

        if (rowSum > maxSum) {
            maxSum = rowSum;
            rowIndex = i;
        }
    }

    cout << "Maximum Row Sum = " << maxSum << " in Row " << rowIndex + 1;
    return 0;
}
