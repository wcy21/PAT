/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 14:29
* @version: 1.0
* @description: 火星数字 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int index(string s[], const string &x) {
    for (int i = 0; i < 13; ++i) {
        if (s[i] == x) return i;
    }
    return 0;
}

int main() {
    string low[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun",
                      "jly", "aug", "sep", "oct", "nov", "dec"};
    string high[13] = {"", "tam", "hel", "maa", "huh", "tou", "kes",
                       "hei", "elo", "syy", "lok", "mer", "jou"};
    int N, num, h, l;
    string str;
    cin >> N;
    cin.get();
    for (int i = 0; i < N; ++i) {
        getline(cin, str);
        if (isdigit(str[0])) {
            num = stoi(str);
            h = num / 13, l = num % 13;
            cout << high[h] << (h && l ? " " : "") + (h && !l ? "" : low[l]) << endl;
        } else {
            h = str.length() > 4 ? index(high, str.substr(0, 3)) : index(high, str);
            l = str.length() > 4 ? index(low, str.substr(4, 3)) : index(low, str);
            cout << 13 * h + l << endl;
        }
    }

    return 0;
}
