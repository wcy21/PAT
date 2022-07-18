/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/18 16:15
* @version: 1.0
* @description: 复数乘法 (分数 15)
********************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double R1, P1, R2, P2, A, B;
    cin >> R1 >> P1 >> R2 >> P2;
    A = R1 * R2 * (cos(P1) * cos(P2) - sin(P1) * sin(P2));
    B = R1 * R2 * (cos(P1) * sin(P2) + sin(P1) * cos(P2));
    cout << fixed << setprecision(2) << (A + 0.005 >= 0 ? fabs(A) : A)
         << (B + 0.005 >= 0 ? "+" : "-") << fabs(B) << "i" << endl;

    return 0;
}
