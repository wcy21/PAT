/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/9 2:20
* @version: 1.0
* @description: 插入与归并 (分数 25)
********************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, index = 1, next, arr[107], ret[107];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> arr[i];
    for (int i = 0; i < N; ++i) cin >> ret[i];

    while (index < N && ret[index] >= ret[index - 1]) index++;  // 递增序列的终点
    for (next = index; arr[next] == ret[next] && next < N; ++next);

    if (next == N) {
        cout << "Insertion Sort" << endl;
        while (--index >= 0 && ret[index] > ret[index + 1]) {
            swap(ret[index], ret[index + 1]);
        }
    } else {
        cout << "Merge Sort" << endl;
        for (int base = 2; base <= N; base *= 2) {
            int l = 0, r = base, flag = 0;
            while (l < N) {
                if (!is_sorted(ret + l, ret + r)) {
                    sort(ret + l, ret + r);
                    flag = 1;
                }
                l += base, r = min(N, r + base);
            }
            if (flag) break;
        }
    }

    for (int i = 0; i < N; ++i) {
        if (i) cout << ' ';
        cout << ret[i];
    }

    return 0;
}
