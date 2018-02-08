//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    vector<int> ivec;
//    int i;
//    while (cin >> i)
//        ivec.push_back(i);
//    for (auto n : ivec)
//        cout << n << " ";
//    cout << endl;
//    return 0;
//}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> svec;
    string str;
    while (cin >> str)
        svec.push_back(str);
    for (auto i : svec)
        cout << i << " ";
    cout << endl;
    return 0;
}