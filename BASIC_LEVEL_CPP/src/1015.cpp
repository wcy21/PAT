/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/19 21:20
* @version: 1.0
* @description: 德才论 (分数 25)
********************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

struct node {
    int m_no, m_s1, m_s2;  // 准考证号，德分，才分
    int m_total, m_level;  // 总分，种类
} nodes[100007];

bool cmp(const node &n1, const node &n2) {
    if (n1.m_level != n2.m_level) return n1.m_level < n2.m_level;
    else if (n1.m_total != n2.m_total) return n1.m_total > n2.m_total;
    else if (n1.m_s1 != n2.m_s1) return n1.m_s1 > n2.m_s1;
    else return n1.m_no < n2.m_no;
}

int main() {
    int N, L, H, num;
    cin >> N >> L >> H, num = N;
    for (int i = 0; i < N; ++i) {
        cin >> nodes[i].m_no >> nodes[i].m_s1 >> nodes[i].m_s2;
        nodes[i].m_total = nodes[i].m_s1 + nodes[i].m_s2;
        if (nodes[i].m_s1 >= H && nodes[i].m_s2 >= H) nodes[i].m_level = 1;
        else if (nodes[i].m_s1 >= H && nodes[i].m_s2 >= L) nodes[i].m_level = 2;
        else if (nodes[i].m_s1 >= nodes[i].m_s2 && nodes[i].m_s2 >= L) nodes[i].m_level = 3;
        else if (nodes[i].m_s1 >= L && nodes[i].m_s2 >= L) nodes[i].m_level = 4;
        else nodes[i].m_level = 5, --num;
    }
    sort(nodes, nodes + N, cmp);
    cout << num << endl;
    for (int i = 0; i < num; ++i) {
        cout << nodes[i].m_no << ' ' << nodes[i].m_s1 << ' ' << nodes[i].m_s2 << endl;
    }

    return 0;
}
