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
int num[10007];  // 储存输入元素

int main() {
    int K;
    cin >> K;

    for (int i = 0; i < K; ++i) {
        cin >> num[i];

        int val = num[i];
        while (val != 1) {
            if (val & 1) {
                val = 3 * val + 1;
            }
            val >>= 1;

            if (vis[val] == 1) {  // n -> f(n)
                break;
            }
            vis[val] = true;
        }
    }

    sort(num, num + K, greater<>());

    bool flag = false;
    for (int i = 0; i < K; ++i) {
        if (!vis[num[i]]) {
            if (!flag) {
                flag = true;
            } else {
                cout << ' ';
            }
            cout << num[i];
        }
    }

    return 0;
}