/********************************************************************************
* @author: 兔子
* @project: BASIC_LEVEL_CPP 
* @date: 2022/5/27 21:38
* @version: 1.0
* @description: 反转链表 (分数 25)
********************************************************************************/

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    int n, k, head, address, index = 0, data[100007], next[100007], list[100007];
    cin >> head >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> address;
        cin >> data[address] >> next[address];
    }
    while (head != -1) {
        list[index++] = head;
        head = next[head];
    }

    for (int i = 0; i < index / k; ++i)
        reverse(list + i * k, list + (i + 1) * k);

    for (int i = 0; i < index - 1; ++i) {
        cout << setfill('0');
        cout << setw(5) << list[i] << ' ' << data[list[i]] << ' ' << setw(5) << list[i + 1] << endl;
    }
    cout << setw(5) << list[index - 1] << ' ' << data[list[index - 1]] << " -1" << endl;

    return 0;
}
