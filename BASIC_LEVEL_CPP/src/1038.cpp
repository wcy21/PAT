/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 13:06
* @version: 1.0
* @description: 统计同成绩学生 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int a[100007] = {0};
    int N, score, K;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> score;
        a[score]++;
    }

    cin >> K;
    for (int i = 0; i < K; ++i) {
        cin >> score;
        cout << (i ? " " : "") << a[score];
    }

    return 0;
}
