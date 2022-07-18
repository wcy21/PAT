/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/18 15:10
* @version: 1.0
* @description: 螺旋矩阵 (分数 25)
********************************************************************************/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    int N, m, n, x = 0, y = 0, next_x, next_y, dire = 0, a[10007];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> a[i];
    for (n = sqrt(N); n > 0; --n) {
        if (N % n == 0) {
            m = N / n;
            break;
        }
    }
    vector<vector<int>> vec(m, vector<int>(n));
    sort(a, a + N, greater<>());
    for (int i = 0; i < N; ++i) {
        vec[x][y] = a[i];
        next_x = x + dx[dire], next_y = y + dy[dire];
        if (next_x < 0 || next_x >= m || next_y < 0 || next_y >= n || vec[next_x][next_y]) {
            dire = (dire + 1) % 4;
        }
        x += dx[dire], y += dy[dire];
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << (j ? " " : "") << vec[i][j];
        }
        cout << endl;
    }

    return 0;
}
