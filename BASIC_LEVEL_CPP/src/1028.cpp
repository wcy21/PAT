/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/29 9:08
* @version: 1.0
* @description: 人口普查 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int N, num = 0;
    string name, birth, max_name, min_name;
    string max_birth = "1814/09/06", min_birth = "2014/09/06";

    cin >> N;
    while (N--) {
        cin >> name >> birth;
        if (birth >= "1814/09/06" && birth <= "2014/09/06") {
            num++;
            if (birth > max_birth) {
                max_name = name;
                max_birth = birth;
            }
            if (birth < min_birth) {
                min_name = name;
                min_birth = birth;
            }
        }
    }
    cout << num;
    if (num) cout << ' ' << min_name << ' ' << max_name << endl;

    return 0;
}
