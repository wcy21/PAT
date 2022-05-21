/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP
* @date: 2022/5/21 15:28
* @version: 1.0
* @description: 锤子剪刀布 (分数 20)
********************************************************************************/

#include <iostream>
#include <map>

using namespace std;

int main() {
    // m: [0] 甲 [1] 乙 | 1 赢 0 平 -1 输 c 对应手势次数
    map<int, int> m[2], win = {{'C', 'J'},
                               {'J', 'B'},
                               {'B', 'C'}};
    int N;
    char c1, c2, max_c1 = 'B', max_c2 = 'B';
    cin >> N;
    while (N--) {
        cin >> c1 >> c2;
        if (win[c1] == c2) {
            m[0][1]++, m[1][-1]++;
            m[0][c1]++;
            if (m[0][c1] > m[0][max_c1] || m[0][c1] == m[0][max_c1] && c1 < max_c1) {
                max_c1 = c1;
            }
        } else if (win[c2] == c1) {
            m[0][-1]++, m[1][1]++;
            m[1][c2]++;
            if (m[1][c2] > m[1][max_c2] || m[1][c2] == m[1][max_c2] && c2 < max_c2) {
                max_c2 = c2;
            }
        } else {
            m[0][0]++, m[1][0]++;
        }
    }
    for (int i = 0; i <= 1; ++i) {
        for (int j = 1; j >= -1; --j) {
            cout << m[i][j];
            cout << (j == -1 ? '\n' : ' ');
        }
    }
    cout << max_c1 << ' ' << max_c2 << endl;

    return 0;
}