#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int a[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (i == j || i + j == n - 1)
                sum += a[i][j];
        }

    cout << "Diagonal Sum = " << sum;
    return 0;
}
