/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP
* @date: 2022/5/16 2:10
* @version: 1.0
* @description: 1005 继续(3n+1)猜想 (分数 25)
********************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

bool vis[10007];  // 记录是否访问过数字 (index)
int val[10007];  // 储存输入元素

int main() {
    int K, num;
    cin >> K;

    for (int i = 0; i < K; ++i) {
        cin >> num;
        val[i] = num;
        while (num != 1) {
            if (num & 1) {
                num = 3 * num + 1;
            }
            num >>= 1;

            if (vis[num]) {  // n -> f(n)
                break;
            }
            vis[num] = true;
        }
    }
    sort(val, val + K, greater<>());

    bool flag = false;
    for (int i = 0; i < K; ++i) {
        if (!vis[val[i]]) {
            if (!flag) {
                flag = true;
            } else {
                cout << ' ';
            }
            cout << val[i];
        }
    }

    return 0;
}