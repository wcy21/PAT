/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/24 17:14
* @version: 1.0
* @description: 组个最小数 (分数 20)
********************************************************************************/

#include<iostream>

using namespace std;

int main() {
    int x = 0, a[10];
    for (int i = 0; i < 10; ++i) cin >> a[i];
    while (!a[++x]);
    cout << x, a[x]--;
    for (int i = 0; i < 10; ++i) {
        while (a[i]--) cout << i;
    }

    return 0;
}