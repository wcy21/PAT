/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/28 18:23
* @version: 1.0
* @description: 程序运行时间 (分数 15)
********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int c1, c2, t[3];
    cin >> c1 >> c2;
    for (int i = 2, diff = (c2 - c1 + 50) / 100; i >= 0; --i, diff /= 60) {
        t[i] = diff % 60;
    }
    cout << setfill('0')
         << setw(2) << t[0] << ':' << setw(2) << t[1] << ':' << setw(2) << t[2] << endl;

    return 0;
}
