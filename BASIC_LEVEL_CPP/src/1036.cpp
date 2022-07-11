/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/11 22:15
* @version: 1.0
* @description: 跟奥巴马一起编程 (分数 15)
********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    char ch;
    cin >> n >> ch;
    for (int i = 1; i <= (n + 1) / 2; ++i) {
        if (i == 1 || i == (n + 1) / 2) {
            cout << setw(n) << setfill(ch) << ch << endl;
        } else {
            cout << ch << setw(n - 1) << setfill(' ') << ch << endl;
        }
    }

    return 0;
}
