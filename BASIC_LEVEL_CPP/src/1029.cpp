/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/29 9:38
* @version: 1.0
* @description: 旧键盘 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    string input, show, broken;
    cin >> input >> show;

    for (char ch: input) {
        char key = islower(ch) ? toupper(ch) : ch;
        if (show.find(ch) == string::npos && broken.find(key) == string::npos) {
            broken += key;
        }
    }

    cout << broken << endl;

    return 0;
}
