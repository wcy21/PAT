/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/28 18:46
* @version: 1.0
* @description: 打印沙漏 (分数 20)
********************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, row;
    char c;
    cin >> n >> c;
    while ((2 * row * (row + 2) + 1) <= n) ++row;

    for (int i = -row + 1; i < row; ++i) {
        cout << string(row - abs(i) - 1, ' ')
             << string(abs(2 * i) + 1, c) << endl;
    }
    cout << n - 2 * row * row + 1 << endl;

    return 0;
}
