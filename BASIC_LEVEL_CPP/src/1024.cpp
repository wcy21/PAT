/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/24 18:20
* @version: 1.0
* @description: 科学计数法 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    string str, sa, ans;
    cin >> str;
    sa = str.substr(1, str.find('E') - 1).erase(1, 1);
    int n = stoi(str.substr(str.find('E') + 1));
    if (str[0] == '-') ans += '-';
    if (n < 0) {
        ans += "0." + string(-n - 1, '0') + sa;
    } else {
        if (n < sa.length() - 1) ans += sa.insert(n + 1, ".");
        else ans += sa.append(n - sa.length() + 1, '0');
    }
    cout << ans << endl;

    return 0;
}

