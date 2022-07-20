/********************************************************************************
* @author: 兔子
* @project: ADVANCED_LEVEL_CPP
* @date: 2022/7/17 19:13
* @version: 1.0
* @description: A+B for Polynomials (分数 25)
********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

double a[1007];

int main() {
    int K, n, cnt = 0;
    double an;
    for (int i = 0; i < 2; ++i) {
        cin >> K;
        for (int j = 0; j < K; ++j) {
            cin >> n >> an;
            a[n] += an;
        }
    }
    for (int i = 0; i <= 1000; ++i) {
        if (a[i] != 0.0) cnt++;
    }
    cout << cnt;
    for (int i = 1000; i >= 0; --i) {
        if (a[i] != 0.0) {
            cout << fixed << setprecision(1) << ' ' << i << ' ' << a[i];
        }
    }

    return 0;
}
