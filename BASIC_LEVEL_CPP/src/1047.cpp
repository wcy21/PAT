/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 19:37
* @version: 1.0
* @description: 编程团体赛 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int N, team, maxt = 0, grade, teams[10007] = {0};
    string tno;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> tno >> grade;
        team = stoi(tno.substr(0, tno.find('-')));
        teams[team] += grade;
        if (teams[team] > teams[maxt]) maxt = team;
    }
    cout << maxt << ' ' << teams[maxt] << endl;

    return 0;
}
