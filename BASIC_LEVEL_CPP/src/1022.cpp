/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/23 20:05
* @version: 1.0
* @description: D进制的A+B (分数 20)
********************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int A, B, D, sum;
    string ans;
    cin >> A >> B >> D, sum = A + B;
    do {
        ans += to_string(sum % D);
    } while ((sum = sum / D));
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}
