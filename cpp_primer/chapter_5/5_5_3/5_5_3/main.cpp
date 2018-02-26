//#include <iostream>
//
//using namespace std;
//
//int main() {
//begin:
//    int i;
//    cin >> i;
//    if (i <= 0)
//        goto begin;
//    cout << i << endl;
//    return 0;
//}

#include <iostream>

using namespace std;

int main() {
    int i;
    do {
        cin >> i;
    } while (i <= 0);
    cout << i << endl;
    return 0;
}