/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/6/18 17:06
* @version: 1.0
* @description: 完美数列 (分数 25)
********************************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, p, arr[100007];
    cin >> N >> p;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    int max_len = 0;
    for (int i = N - 1; i >= 0; --i) {
        // 假设最大数字为 arr[i], 最小数字为 min_num
        int min_num = ceil(double(arr[i]) / p);
        int len = distance(lower_bound(arr, arr + N, min_num), arr + i + 1);
        max_len = max(max_len, len);
    }
    cout << max_len << endl;

    return 0;
}