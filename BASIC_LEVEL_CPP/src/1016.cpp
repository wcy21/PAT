/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/19 22:08
* @version: 1.0
* @description: 部分A+B (分数 15)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    string A, B;
    int DA, DB, PA = 0, PB = 0;
    cin >> A >> DA >> B >> DB;

    for (auto c: A) {
        if (c == DA + '0') PA = 10 * PA + DA;
    }
    for (auto c: B) {
        if (c == DB + '0') PB = 10 * PB + DB;
    }
    cout << PA + PB << endl;

    return 0;
}