/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/1 3:40
* @version: 1.0
* @description: 有理数四则运算 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}

string fraction(long long a, long long b) {
    long long c = gcd(a, b);
    a /= c, b /= c;
    if (b < 0) {
        a = -a, b = -b;
    }  // 简化a/b，并保证b不为负数

    long long k = a / b;  // 整数部分
    a %= b;
    string ret;
    if (k) { // 整数部分不为0
        ret += to_string(k);
        a = abs(a), b = abs(b);
    }
    if (a) { // 分子部分不为0
        if (k) ret += ' ';  // 整数和分数部分间添加空格
        ret += to_string(a);
        if (b) ret += '/' + to_string(b);  // 分母不为0 (a/b 不是整数)
    }
    if (!k && !a) ret += '0'; // 整数部分和分子都为0
    if (ret.front() == '-') ret = "(" + ret + ")";  // 负数添加括号

    return ret;
}

int main() {
    long long a1, b1, a2, b2;
    char ch;
    cin >> a1 >> ch >> b1 >> a2 >> ch >> b2;
    cout << fraction(a1, b1) << " + " << fraction(a2, b2) << " = " << fraction(a1 * b2 + a2 * b1, b1 * b2) << endl;
    cout << fraction(a1, b1) << " - " << fraction(a2, b2) << " = " << fraction(a1 * b2 - a2 * b1, b1 * b2) << endl;
    cout << fraction(a1, b1) << " * " << fraction(a2, b2) << " = " << fraction(a1 * a2, b1 * b2) << endl;
    cout << fraction(a1, b1) << " / " << fraction(a2, b2) << " = " << (a2 ? fraction(a1 * b2, b1 * a2) : "Inf") << endl;
    return 0;
}