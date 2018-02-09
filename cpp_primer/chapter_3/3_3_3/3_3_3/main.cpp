//#include <iostream>
//#include <string>
//#include <vector>
//#include <cctype>
//
//using namespace std;
//
//int main() {
//    string str;
//    vector<string> svec;
//    while (cin >> str)
//        svec.push_back(str);
//    for (auto &s : svec) {
//        for (auto &c : s)
//            c = toupper(c);
//        cout << s << endl;
//    }
//    return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    vector<int> ivec1(10, 42);
//    vector<int> ivec2{ 42,42,42,42,42,42,42,42,42,42 };
//    vector<int> ivec3 = { 42,42,42,42,42,42,42,42,42,42 };
//    vector<int> ivec4;
//    for (int i = 0; i < 10; i++)
//        ivec4.push_back(42);
//
//    cout << "ivec1    ivec2    ivec3    ivec4" << endl;
//    for (int i = 0; i < 10; i++)
//        cout << ivec1[i] << "        " << ivec2[i] << "        " << ivec3[i] << "        " << ivec4[i] << endl;
//    return 0;
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
//        for (int n = 0; n < ivec.size(); n += 2)
//            cout << ivec[n] + ivec[n + 1] << " ";
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
    int i;
    vector<int> ivec;
    while (cin >> i)
        ivec.push_back(i);
    if (ivec.size() % 2 == 0) {
        for (int n = 0; n < ivec.size() / 2; n++)
            cout << ivec[n] + ivec[ivec.size() - 1 - n] << " ";
        cout << endl;
        return 0;
    } else {
        cerr << "wrong!" << endl;
        return -1;
    }
}