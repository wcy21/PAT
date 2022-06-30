/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/1 2:45
* @version: 1.0
* @description: 旧键盘打字 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    string broken, input;
    getline(cin, broken);
    getline(cin, input);

    for (auto key: input) {
        if (broken.find(toupper(key)) != string::npos) {
            continue;
        }
        if (broken.find('+') != string::npos && isupper(key)) {
            continue;
        }
        cout << key;
    }

    return 0;
}
