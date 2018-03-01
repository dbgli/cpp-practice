#include <iostream>

using namespace std;

void mySWAP(int *ip, int *jp) {
    int temp;
    temp = *ip;
    *ip = *jp;
    *jp = temp;
}

int main() {
    int i, j;
    cin >> i >> j;
    cout << "i = " << i << "  j = " << j << endl;
    mySWAP(&i, &j);
    cout << "i = " << i << "  j = " << j << endl;
    return 0;
}