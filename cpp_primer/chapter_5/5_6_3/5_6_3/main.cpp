//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int i1, i2;
//    cin >> i1 >> i2;
//    cout << i1 << " / " << i2 << " = " << i1 / i2 << endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int i1, i2;
//    cin >> i1 >> i2;
//    if (i2 == 0)
//        throw runtime_error("除数不能为零");
//    cout << i1 << " / " << i2 << " = " << i1 / i2 << endl;
//    return 0;
//}

#include <iostream>

using namespace std;

int main() {
    int i1, i2;
    while (cin >> i1 >> i2) {
        try {
            if (i2 == 0)
                throw runtime_error("除数不能为零");
            cout << i1 << " / " << i2 << " = " << i1 / i2 << endl;
        } catch (runtime_error err) {
            cout << err.what() << endl << "Try again? Enter y or n: ";
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }
    return 0;
}