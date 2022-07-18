/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/18 18:13
* @version: 1.0
* @description: 住房空置率 (分数 20)
********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, D, K, cnt, may_empty = 0, empty = 0;
    double e, E;
    cin >> N >> e >> D;
    for (int i = 0; i < N; ++i, cnt = 0) {
        cin >> K;
        for (int j = 0; j < K; ++j) {
            cin >> E;
            if (E < e) ++cnt;
        }
        if (cnt > K / 2) K > D ? empty++ : may_empty++;
    }
    cout << fixed << setprecision(1) << may_empty * 100.0 / N << "% " << empty * 100.0 / N << "%" << endl;

    return 0;
}
