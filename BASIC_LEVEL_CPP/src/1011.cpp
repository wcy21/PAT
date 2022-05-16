/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/17 0:45
* @version: 1.0
* @description: A+B 和 C (分数 15)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; ++i) {
        int A, B, C, flag = 0;
        cin >> A >> B >> C;

        flag = ((A >> 1) + (B >> 1) > (C >> 1));
        if ((A >> 1) + (B >> 1) == (C >> 1)) {
            flag = ((A & 1) + (B & 1) > (C & 1));
        }

        cout << "Case #" << i << ": " << (flag ? "true" : "false") << endl;
    }

    return 0;
}
