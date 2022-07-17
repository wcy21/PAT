/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 14:14
* @version: 1.0
* @description: 输出PATest (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int flag = 1, cnt[6] = {0};
    string str, PATest = "PATest";
    cin >> str;
    for (auto ch: str) {
        for (int i = 0; i < 6; ++i) {
            if (ch == PATest[i]) cnt[i]++;
        }
    }
    while (flag) {
        flag = 0;
        for (int i = 0; i < 6; ++i) {
            if (--cnt[i] >= 0) {
                flag = 1;
                cout << PATest[i];
            }
        }
    }

    return 0;
}
