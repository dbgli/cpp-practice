//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int i;
//    vector<int> ivec;
//    while (cin >> i)
//        ivec.push_back(i);
//    if (ivec.size() % 2 == 0) {
//        for (auto it = ivec.begin(); it != ivec.end(); it += 2)
//            cout << *it + *(it + 1) << " ";
//        cout << endl;
//        return 0;
//    } else {
//        cerr << "wrong!" << endl;
//        return -1;
//    }
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int i;
//    vector<int> ivec;
//    while (cin >> i)
//        ivec.push_back(i);
//    if (ivec.size() % 2 == 0) {
//        for (int n = 0; n < ivec.size() / 2; n++)
//            cout << *(ivec.begin() + n) + *(ivec.end() - 1 - n) << " ";
//        cout << endl;
//        return 0;
//    } else {
//        cerr << "wrong!" << endl;
//        return -1;
//    }
//}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    unsigned grade;
    vector<unsigned> scores(11, 0);
    while (cin >> grade)
        if (grade <= 100) {
            auto it = scores.begin();
            (*(it + grade / 10))++;
        }
    for (auto i : scores)
        cout << i << " ";
    cout << endl;
    return 0;
}