/********************************************************************************
* @author: 兔子
* @project: ADVANCED_LEVEL_CPP 
* @date: 2022/5/29 9:49
* @version: 1.0
* @description: A+B Format (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int a, b, flag;
    cin >> a >> b;

    string sum = to_string(a + b);
    flag = (a + b > 0 ? 0 : 1);
    for (int i = 3; i < sum.length() - flag; i += 4) {
        sum.insert(sum.length() - i, ",");
    }
    cout << sum << endl;

    return 0;
}
