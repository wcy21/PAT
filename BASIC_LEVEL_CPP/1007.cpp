/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/16 15:58
* @version: 1.0
* @description: 素数对猜想 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

bool Prime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, num = 0;
    cin >> N;
    for (int i = 5; i <= N; ++i) {
        if (Prime(i - 2) && Prime(i)) {
            ++num;
        }
    }
    cout << num << endl;

    return 0;
}
