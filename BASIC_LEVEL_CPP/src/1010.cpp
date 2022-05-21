/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/16 22:04
* @version: 1.0
* @description: 一元多项式求导 (分数 25)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int x, n, flag = 0;
    while (cin >> x >> n) {
        if (n) {
            if (flag) cout << ' ';
            cout << x * n << ' ' << n - 1;
            flag = 1;
        }
    }
    if (!flag) cout << "0 0";

    return 0;
}
