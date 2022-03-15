// Author: qyl27
// 2022.3.15

#include <bits/stdc++.h>

#define INF 0x3F3F3F3F;

using namespace std;

int bombs[105][105];

int main() {
    int height = 0;
    int width = 0;

    cin >> height >> width;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            char c = '\0';
            cin >> c;
            if (c == '*') {
                bombs[i][j] = -INF;
                for (int m = (i - 1); m <= (i + 1); ++m) {
                    for (int n = (j - 1); n <= (j + 1); ++n) {
                        if (m >= 0 && m < height && n >= 0 && n < width) {
                            bombs[m][n] += 1;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (bombs[i][j] >= 0) {
                cout << bombs[i][j];
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
