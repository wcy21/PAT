/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/14 19:33
* @version: 1.0
* @description: 写出这个数 (分数 20)
********************************************************************************/

#include <iostream>
#include <string>

using namespace std;

string str[10] = {
        "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"
};

void printSum(int sum) {
    if (sum < 10) {
        cout << str[sum];
    } else {
        printSum(sum / 10);
        cout << ' ' << str[sum % 10];
    }
}

int main() {
    string num;
    cin >> num;

    int sum = 0;
    for (int i = 0; i < num.length(); ++i) {
        sum += num[i] - '0';
    }
    printSum(sum);

    return 0;
}
