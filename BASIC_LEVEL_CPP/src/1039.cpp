/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 13:12
* @version: 1.0
* @description: 到底买不买 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    string stall, need;
    cin >> stall >> need;

    for (auto bead = need.begin(); bead != need.end();) {
        if (stall.find(*bead) != string::npos) {
            stall.erase(stall.find(*bead), 1);
            bead = need.erase(bead);
        } else bead++;
    }

    if (need.empty()) {
        cout << "Yes " << stall.length() << endl;
    } else {
        cout << "No " << need.length() << endl;
    }

    return 0;
}
