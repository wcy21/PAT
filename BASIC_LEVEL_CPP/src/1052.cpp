/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP
* @date: 2022/7/18 16:45
* @version: 1.0
* @description: 卖个萌 (分数 20)
********************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K, e1, e2, e3, e4, e5;
    vector<vector<string>> v(3);
    for (int i = 0; i < 3; ++i) {
        string str;
        getline(cin, str);
        for (int j = 0, l = 0, len = 0; j < str.size(); l = j, len = 0) {
            while (j < str.size() && str[j++] != '[') l = j;
            while (j < str.size() && str[j++] != ']') len++;
            if (len) v[i].push_back(str.substr(l + 1, len));
        }
    }
    cin >> K;
    for (int i = 0; i < K; ++i) {
        cin >> e1 >> e2 >> e3 >> e4 >> e5;
        if (e1 < 1 || e1 > v[0].size() || e2 < 1 || e2 > v[1].size() || e3 < 1 || e3 > v[2].size()
            || e4 < 1 || e4 > v[1].size() || e5 < 1 || e5 > v[0].size()) {
            cout << "Are you kidding me? @\\/@" << endl;
        } else {
            cout << v[0][e1 - 1] << '(' << v[1][e2 - 1] << v[2][e3 - 1] << v[1][e4 - 1] << ')' << v[0][e5 - 1] << endl;
        }
    }

    return 0;
}
