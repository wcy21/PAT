/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/16 15:49
* @version: 1.0
* @description: 换个格式输出整数 (分数 15)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n, a[3];
    cin >> n;
    for (int i = 0; i < 3; ++i) {
        a[i] = n % 10;
        n /= 10;
    }

    for (int i = 0; i < a[2]; ++i) cout << 'B';
    for (int i = 0; i < a[1]; ++i) cout << 'S';
    for (int i = 0; i < a[0]; ++i) cout << i + 1;

    return 0;
}
