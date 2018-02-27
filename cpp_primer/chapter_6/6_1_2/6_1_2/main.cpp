//#include <iostream>
//#include "Chapter6.h"
//
//using namespace std;
//
//int fact(int val) {
//    int ret = 1;
//    while (val > 1)
//        ret *= val--;
//    return ret;
//}
//
//int main() {
//    cout << "5! = " << fact(5) << endl;
//    return 0;
//}

//#include <iostream>
//#include "Chapter6.h"
//
//using namespace std;
//
//int fact(int val) {
//    int ret = 1;
//    while (val > 1)
//        ret *= val--;
//    return ret;
//}
//
//int main() {
//    int i;
//    cin >> i;
//    cout << i << "! = " << fact(i) << endl;
//    return 0;
//}

#include <iostream>
#include "Chapter6.h"

using namespace std;

double absolute(double val) {
    if (val < 0)
        val = -val;
    return val;
}

int main() {
    double i;
    cin >> i;
    cout << "abs(" << i << ") = " << absolute(i) << endl;
    return 0;
}