/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 19:46
* @version: 1.0
* @description: 数字加密 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    string a, b, ans, pw = "0123456789JQK";
    cin >> a >> b;
    int la = a.length(), lb = b.length(), len = max(la, lb);
    la > lb ? b.insert(0, la - lb, '0') : a.insert(0, lb - la, '0');
    for (int i = 0; i < len; ++i) {
        int na = a[i] - '0', nb = b[i] - '0';
        if ((len - i) & 1) {
            ans.push_back(pw[(na + nb) % 13]);
        } else {
            ans.push_back(pw[nb >= na ? nb - na : nb + 10 - na]);
        }
    }
    cout << ans << endl;

    return 0;
}
