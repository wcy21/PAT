/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/1 0:31
* @version: 1.0
* @description: 查验身份证 (分数 15)
********************************************************************************/

#include <iostream>

using namespace std;

int value[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
string check = "10X98765432";

int main() {
    int N;
    cin >> N;

    bool all_pass = true;
    while (N--) {
        string ID;
        cin >> ID;

        int sum = 0;
        bool pass = true;
        for (int i = 0; i < 17; ++i) {
            if (!isdigit(ID[i])) {
                pass = false;
                break;
            }
            sum += value[i] * (ID[i] - '0');
        }
        if (pass && check[sum % 11] != ID[17]) {
            pass = false;
        }

        if (!pass) {
            all_pass = false;
            cout << ID << endl;
        }
    }

    if (all_pass) {
        cout << "All passed" << endl;
    }

    return 0;
}
