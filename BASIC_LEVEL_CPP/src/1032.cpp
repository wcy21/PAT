/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/1 1:27
* @version: 1.0
* @description: 挖掘机技术哪家强 (分数 20)
********************************************************************************/

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> schools;

    int N;
    cin >> N;
    while (N--) {
        int schoolId, score;
        cin >> schoolId >> score;
        schools[schoolId] += score;
    }

    int max_id, max_score = -1;
    for (auto school: schools) {
        if (school.second > max_score) {
            max_id = school.first;
            max_score = school.second;
        }
    }
    cout << max_id << ' ' << max_score << endl;

    return 0;
}
