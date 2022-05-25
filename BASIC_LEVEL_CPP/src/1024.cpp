/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/24 18:20
* @version: 1.0
* @description: 科学计数法 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    string sa = str.substr(0, str.find('E'));
    string sn = str.substr(str.find('E') + 1);
    int n = stoi(sn);
    cout << sa << ' ' << sn << endl;


    return 0;
}
