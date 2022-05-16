/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/16 21:42
* @version: 1.0
* @description:说反话 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    string strs[87];
    int index = -1;
    while (cin >> strs[++index]) {
    }
    while (index--) {
        cout << strs[index];
        if (index) {
            cout << ' ';
        }
    }

    return 0;
}