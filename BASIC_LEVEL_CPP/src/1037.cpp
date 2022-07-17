/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/11 22:43
* @version: 1.0
* @description: 在霍格沃茨找零钱 (分数 20)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int galleon, sickle, kunt, P;
    char ch;
    cin >> galleon >> ch >> sickle >> ch >> kunt;
    P = (galleon * 17 + sickle) * 29 + kunt;
    cin >> galleon >> ch >> sickle >> ch >> kunt;
    P = (galleon * 17 + sickle) * 29 + kunt - P;

    galleon = P / (17 * 29);
    P = (P < 0 ? -P : P) % (17 * 29);
    sickle = P / 29;
    kunt = P % 29;
    cout << galleon << '.' << sickle << '.' << kunt << endl;

    return 0;
}
