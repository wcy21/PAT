/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 13:41
* @version: 1.0
* @description: 有几个PAT (分数 25)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int P = 0, PA = 0, PAT = 0;
    string str;
    cin >> str;
    for (auto ch: str) {
        if (ch == 'P') P++;
        if (ch == 'A') PA += P;
        if (ch == 'T') PAT = (PAT + PA) % 1000000007;
    }
    cout << PAT << endl;

    return 0;
}
