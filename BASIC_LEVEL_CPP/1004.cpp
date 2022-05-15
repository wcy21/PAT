/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/15 15:45
* @version: 1.0
* @description: 1004 成绩排名 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int grade, max_grade = -1, min_grade = 101;
    string name, max_name, min_name;
    string sno, max_sno, min_sno;

    while (n--) {
        cin >> name >> sno >> grade;
        if (grade > max_grade) {
            max_name = name;
            max_sno = sno;
            max_grade = grade;
        }
        if (grade < min_grade) {
            min_name = name;
            min_sno = sno;
            min_grade = grade;
        }
    }

    cout << max_name << ' ' << max_sno << endl;
    cout << min_name << ' ' << min_sno << endl;

    return 0;
}
