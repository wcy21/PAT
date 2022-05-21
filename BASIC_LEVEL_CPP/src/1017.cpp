/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP
* @date: 2022/5/21 15:14
* @version: 1.0
* @description: A除以B (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    string A, Q;
    int B, temp = 0;
    cin >> A >> B;
    for (char c: A) {
        temp = 10 * temp + c - '0';
        Q += temp / B + '0';
        temp %= B;
    }
    cout << Q.erase(0, min(Q.find_first_not_of('0'), Q.size() - 1))
         << ' ' << temp;

    return 0;
}
