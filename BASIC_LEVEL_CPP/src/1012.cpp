/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/17 1:41
* @version: 1.0
* @description: 数字分类 (分数 20)
********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int v[5][2];

int main() {
    int N, num, mod;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        mod = num % 5;
        v[mod][0]++;  // 余数为mod的情况+1
        if (mod == 4) {  // 余数为4，存放最大num
            v[mod][1] = max(v[mod][1], num);
        } else if (mod != 0 || (num & 1) == 0) {  // 余数为0,1,2,3时，按要求加上num
            if (mod == 1) {  // 交替给num赋正负值
                num = (v[mod][0] & 1) ? num : -num;
            }
            v[mod][1] += num;
        } else {  // 能被5整除不能被2整除，舍去该情况
            v[mod][0]--;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (i != 0) cout << ' ';
        if (!v[i][0]) {  // 未被赋值，表示未访问合法数据
            cout << 'N';
        } else {
            if (i == 3) {
                cout << fixed << setprecision(1) << double(v[i][1]) / v[i][0];
            } else if (i == 2) {
                cout << v[i][0];
            } else {
                cout << v[i][1];
            }
        }
    }

    return 0;
}
