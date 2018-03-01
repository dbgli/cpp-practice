//#include <iostream>
//
//using namespace std;
//
//void reset(int *ip) {
//    *ip = 0;
//}
//
//int main() {
//    int i = 42;
//    cout << "i = " << i << endl;
//    reset(&i);
//    cout << "i = " << i << endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//void reset(int &ir) {
//    ir = 0;
//}
//
//int main() {
//    int i = 42;
//    cout << "i = " << i << endl;
//    reset(i);
//    cout << "i = " << i << endl;
//    return 0;
//}

#include <iostream>

using namespace std;

void mySWAP(int &i, int &j) {
    int temp;
    temp = i;
    i = j;
    j = temp;
}

int main() {
    int i, j;
    cin >> i >> j;
    cout << "i = " << i << "  j = " << j << endl;
    mySWAP(i, j);
    cout << "i = " << i << "  j = " << j << endl;
    return 0;
}