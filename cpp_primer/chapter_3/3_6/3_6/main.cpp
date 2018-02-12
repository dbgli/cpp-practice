#include <iostream>
#include <iterator>

using namespace std;

using int_array = int[4];
//typedef int int_array[4];

int main() {
    int ia[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };

    //ver 1
    for (auto &i : ia) {
        for (auto &j : i)
            cout << j << " ";
        cout << endl;
    }
    cout << endl;

    //vec 2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    //ver 3
    for (int (*p)[4] = ia; p != ia + 3; p++) {
        for (int *q = *p; q != *p + 4; q++)
            cout << *q << " ";
        cout << endl;
    }
    cout << endl;

    //ver 4
    for (int_array *p = ia; p != ia + 3; p++) {
        for (int *q = *p; q != *p + 4; q++)
            cout << *q << " ";
        cout << endl;
    }
    cout << endl;

    //ver 5
    for (auto p = ia; p != ia + 3; p++) {
        for (auto q = *p; q != *p + 4; q++)
            cout << *q << " ";
        cout << endl;
    }
    cout << endl;

    //ver 6
    for (auto p = begin(ia); p != end(ia); p++) {
        for (auto q = begin(*p); q != end(*p); q++)
            cout << *q << " ";
        cout << endl;
    }
    cout << endl;

    return 0;
}