/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 18:17
* @version: 1.0
* @description: 快速排序 (分数 25)
********************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, idx = 0, a[100007], b[100007], ans[100007];
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + N);
    for (int i = 0, val = 0; i < N; ++i) {
        if (a[i] == b[i] && a[i] > val) {
            ans[idx++] = a[i];
        }
        val = max(val, a[i]);
    }

    cout << idx << endl;
    for (int i = 0; i < idx; ++i) {
        cout << (i ? " " : "") << ans[i];
    }
    cout << endl;

    return 0;
}
