/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 14:03
* @version: 1.0
* @description: 字符统计 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int ans = 0, ascii[256] = {0};
    string str;
    getline(cin, str);
    for (auto ch: str) {
        ascii[tolower(ch)]++;
    }
    for (int i = 'a'; i < 'z'; ++i) {
        if (ascii[i] > ascii[ans]) ans = i;
    }
    cout << char(ans) << ' ' << ascii[ans] << endl;

    return 0;
}
