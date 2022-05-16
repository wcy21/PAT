/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/17 3:24
* @version: 1.0
* @description: 数素数 (分数 20)
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
    int M, N, num = 0, cnt = 0;
    cin >> M >> N;
    for (int i = 1; i <= M; ++i) {
        while (!Prime(++num));
    }
    for (int i = M; i <= N; ++i) {
        while (!Prime(++num));
        if (cnt++) {
            if (cnt % 10 == 1) {
                cout << '\n';
            } else {
                cout << ' ';
            }
        }
        cout << num;
    }

    return 0;
}
