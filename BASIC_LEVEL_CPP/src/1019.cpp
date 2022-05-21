/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/21 16:40
* @version: 1.0
* @description: 数字黑洞 (分数 20)
********************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s, s1, s2;
    cin >> s;
    s.insert(0, 4 - s.size(), '0');
    do {
        s1 = s, s2 = s;
        sort(s1.begin(), s1.end(), greater<>());
        sort(s2.begin(), s2.end());
        s = to_string(stoi(s1) - stoi(s2));
        s.insert(0, 4 - s.size(), '0');
        cout << s1 << " - " << s2 << " = " << s << endl;
    } while (s != "0000" && s != "6174");

    return 0;
}
