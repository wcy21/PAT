/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 13:52
* @version: 1.0
* @description: 考试座位号 (分数 15)
********************************************************************************/

#include <iostream>

using namespace std;

pair<string, int> datas[1007];

int main() {
    int N, M, test_no, exam_no;
    string ID;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> ID >> test_no >> exam_no;
        datas[test_no] = {ID, exam_no};
    }
    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> test_no;
        cout << datas[test_no].first << ' ' << datas[test_no].second << endl;
    }

    return 0;
}
