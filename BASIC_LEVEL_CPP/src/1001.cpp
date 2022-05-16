/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/14 19:27
* @version: 1.0
* @description: 1001 害死人不偿命的(3n+1)猜想 (分数 15)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n = 0, cnt = 0;
    cin >> n;
    while (n != 1) {
        if (n & 1) {
            n = 3 * n + 1;
        }
        n >>= 1;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}
