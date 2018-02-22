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

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    vector<int> ivec;
//    for (int i; cin >> i; ivec.push_back(i));
//    for (auto n : ivec)
//        cout << n << " ";
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int sum = 0;
//    for (int i = 1; i <= 10; ++i)
//        sum += i;
//    cout << sum << endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int i = 1, sum = 0;
//    while (i <= 10) {
//        sum += i;
//        ++i;
//    }
//    cout << sum << endl;
//    return 0;
//}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ivec1, ivec2, *pvec1, *pvec2;
    int i;
    bool flag = 0;
    cout << "ivec1: ";
    while (cin >> i)
        ivec1.push_back(i);
    cin.clear();
    cout << "ivec2: ";
    while (cin >> i)
        ivec2.push_back(i);
    if (ivec1.size() <= ivec2.size()) {
        pvec1 = &ivec1;
        pvec2 = &ivec2;
    } else {
        pvec1 = &ivec2;
        pvec2 = &ivec1;
    }
    for (int n = 0; n != pvec1->size(); ++n) {
        if ((*pvec1)[n] != (*pvec2)[n]) {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "false" << endl;
    else
        cout << "true" << endl;
    return 0;
}