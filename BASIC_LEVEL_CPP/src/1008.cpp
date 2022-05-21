/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/16 16:08
* @version: 1.0
* @description: 数组元素循环右移问题 (分数 20)
********************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, M, arr[107];
    cin >> N >> M;
    for (int i = 0; i < N; ++i) cin >> arr[i];
    M %= N;

    reverse(arr, arr + N);
    reverse(arr, arr + M);
    reverse(arr + M, arr + N);

    for (int i = 0; i < N; ++i) {
        if (i != 0) cout << ' ';
        cout << arr[i];
    }

    return 0;
}
