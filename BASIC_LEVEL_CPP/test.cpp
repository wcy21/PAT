#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K, e1, e2, e3, e4, e5;
    vector<vector<string>> v;
    for (int i = 0; i < 3; i++) {
        string s;
        getline(cin, s);
        vector<string> row;
        int j = 0, k = 0;
        while (j < s.length()) {
            if (s[j] == '[') {
                while (k++ < s.length()) {
                    if (s[k] == ']') {
                        row.push_back(s.substr(j + 1, k - j - 1));
                        break;
                    }
                }
            }
            j++;
        }
        v.push_back(row);
    }
    cin >> K;
    for (int i = 0; i < K; i++) {
        cin >> e1 >> e2 >> e3 >> e4 >> e5;
        if (e1 > v[0].size() || e2 > v[1].size() || e3 > v[2].size() || e4 > v[1].size() || e5 > v[0].size() ||
            e1 < 1 || e2 < 1 || e3 < 1 || e4 < 1 || e5 < 1) {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        } else {
            cout << v[0][e1 - 1] << "(" << v[1][e2 - 1] << v[2][e3 - 1] << v[1][e4 - 1] << ")" << v[0][e5 - 1] << endl;
        }
    }
    return 0;
}