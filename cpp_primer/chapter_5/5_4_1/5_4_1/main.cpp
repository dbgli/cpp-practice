#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, nextStr, maxStr;
    unsigned cnt = 1, maxCnt = 0;
    cin >> str;
    while (cin >> nextStr) {
        if (str == nextStr) {
            ++cnt;
            if (cnt > maxCnt) {
                maxCnt = cnt;
                maxStr != str ? maxStr = str : maxStr;
            }
        } else {
            cnt = 1;
            str = nextStr;
        }
    }
    if (maxCnt != 0)
        cout << "单词 " << maxStr << " 连续出现了 " << maxCnt << " 次" << endl;
    else
        cout << "任何单词都没有连续出现过" << endl;
    return 0;
}