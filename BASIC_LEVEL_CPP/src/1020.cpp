/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/22 9:37
* @version: 1.0
* @description: 月饼 (分数 25)
********************************************************************************/

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct node {
    double a, b, c;  // a 库存 b 总售价 c 单价
} nodes[1007];

bool cmp(const node &n1, const node &n2) {
    return n1.c > n2.c;
}

int main() {
    int N;
    double D, ans = 0;
    cin >> N >> D;
    for (int i = 0; i < N; ++i) cin >> nodes[i].a;
    for (int i = 0; i < N; ++i) cin >> nodes[i].b;
    for (int i = 0; i < N; ++i) nodes[i].c = nodes[i].b / nodes[i].a;
    sort(nodes, nodes + N, cmp);
    for (int i = 0; i < N; ++i) {
        if (D > nodes[i].a) {
            ans += nodes[i].b;
            D -= nodes[i].a;
        } else {
            ans += D * nodes[i].c;
            break;
        }
    }
    cout << fixed << setprecision(2) << ans << endl;

    return 0;
}
