/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/18 14:30
* @version: 1.0
* @description: 数列的片段和 (分数 20)
********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long N, sum = 0;
    double num;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        sum += (long long) (1000 * num) * (i + 1) * (N - i);
    }
    cout << fixed << setprecision(2) << sum / 1000.0 << endl;

    return 0;
}
