//#include <iostream>
//
//using namespace std;
//
//int myCompare(const int i, const int *j) {
//    if (i >= *j)
//        return i;
//    else
//        return *j;
//}
//
//int main() {
//    int i, j;
//    cin >> i >> j;
//    cout << myCompare(i, &j) << endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//void mySWAP(const int *&i, const int *&j) {
//    const int *temp;
//    temp = i;
//    i = j;
//    j = temp;
//}
//
//int main() {
//    int i, j;
//    const int *ip = &i, *jp = &j;
//    cin >> i >> j;
//    cout << "i = " << i << "  j = " << j << endl;
//    cout << "*ip = " << *ip << "  *jp = " << *jp << endl;
//    mySWAP(ip, jp);
//    cout << "i = " << i << "  j = " << j << endl;
//    cout << "*ip = " << *ip << "  *jp = " << *jp << endl;
//    return 0;
//}

#include <iostream>

using namespace std;

void print1(const int *ip) {
    cout << *ip << endl;
}

void print2(const int *ip, const int size) {
    for (int i = 0; i != size; ++i)
        //cout << *ip++ << " ";
        cout << ip[i] << " ";
    cout << endl;
}

void print3(const int *beg, const int *end) {
    while (beg != end)
        cout << *beg++ << " ";
    cout << endl;
}

void print4(const int (&arr)[2]) {
    for (auto n : arr)
        cout << n << " ";
    cout << endl;
}

int main() {
    int i = 0, j[2] = { 0,1 };
    print1(&i);
    print2(j, 2);
    print2(j, end(j) - begin(j));
    print3(begin(j), end(j));
    print4(j);
    return 0;
}