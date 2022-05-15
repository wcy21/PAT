/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/14 19:43
* @version: 1.0
* @description: 1003 我要通过！ (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        int p = 0, a = -1, t = -1;  // A的个数 (p-'P'-a-'T'-t),值为-1表示未出现该字符(aPbATca)
        int *cnt = &p;
        for (int i = 0; i < s.size(); ++i, ++(*cnt)) {
            if (s[i] == 'P' && a == -1) {  // 第一次遇到P
                cnt = &a;
            } else if (s[i] == 'T' && a > 0 && t == -1) {  // 第一次遇到T,且P,T之间存在A
                cnt = &t;
            } else if (s[i] != 'A') {  // 不存在其他非A字符情况
                t = 1e4 + 7;
                break;
            }
        }

        if (p * a == t) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

