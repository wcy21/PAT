/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/18 23:03
* @version: 1.0
* @description: 福尔摩斯的约会 (分数 20)
********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string week[] = {
            "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"
    };
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    
    int p = 0;
    while (s1[p] != s2[p] || !(s1[p] >= 'A' && s1[p] <= 'G')) ++p;
    cout << week[s1[p++] - 'A'] << ' ';

    while (s1[p] != s2[p] || (s1[p] < 'A' || s1[p] > 'N') && !isdigit(s1[p])) ++p;
    cout << setw(2) << setfill('0') << (isdigit(s1[p]) ? s1[p] - '0' : s1[p] - 'A' + 10) << ':';

    p = 0;
    while (s3[p] != s4[p] || !isalpha(s3[p])) ++p;
    cout << setw(2) << setfill('0') << p;

    return 0;
}
