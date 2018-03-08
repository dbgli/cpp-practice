#include <iostream>

using namespace std;

int foo(initializer_list<int> lst) {
    int sum = 0;
    for (const auto &i : lst)
        sum += i;
    return sum;
}

int main() {
    cout << foo({ 1,2,3,4,5,6,7,8,9,10 }) << endl;
    return 0;
}