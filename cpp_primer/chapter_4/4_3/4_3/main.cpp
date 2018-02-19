//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int i;
//    while (cin >> i && i != 42)
//        cout << i << " ";
//    cout << endl;
//    return 0;
//}

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d)
        cout << "a>b>c>d" << endl;
    else
        cout << "wrong!" << endl;
    return 0;
}