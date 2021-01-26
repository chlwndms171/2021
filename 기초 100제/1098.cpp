#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[100][100] = {};
    int w, h;
    int n;
    int l, d, x, y;

    cin >> w >> h;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            arr[i][j] = 0;
        }
    }
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l >> d >> x >> y;
        if (d == 1) {
            for (int j = 0; j < l; j++) {
                arr[x - 1 + j][y - 1] = 1;
            }
        }
        else {
            for (int j = 0; j < l; j++) {
                arr[x - 1][y - 1 + j] = 1;
            }
        }
    }

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}