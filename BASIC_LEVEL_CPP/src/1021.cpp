/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/23 20:00
* @version: 1.0
* @description: 个位数统计 (分数 15)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int a[10] = {0};
    for (char c: str) a[c - '0']++;
    for (int i = 0; i <= 9; ++i) {
        if (a[i]) cout << i << ":" << a[i] << endl;
    }

    return 0;
}
