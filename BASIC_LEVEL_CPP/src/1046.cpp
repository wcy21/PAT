/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/7/17 18:57
* @version: 1.0
* @description: 划拳 (分数 15)
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int N, asay, ashow, adrink = 0, bsay, bshow, bdrink = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> asay >> ashow >> bsay >> bshow;
        if (ashow == asay + bsay && bshow != asay + bsay) {
            bdrink++;
        }
        if (bshow == asay + bsay && ashow != asay + bsay) {
            adrink++;
        }
    }
    cout << adrink << ' ' << bdrink << endl;

    return 0;
}
