//#include <iostream>
//#include <string>
//#include <cctype>
//
//using namespace std;
//
//bool isHaveCapitalLetters(const string &str) {
//    bool flag = 0;
//    for (const auto &c : str) {
//        if (isupper(c)) {
//            flag = 1;
//            break;
//        }
//    }
//    return flag;
//}
//
//int main() {
//    string str;
//    cin >> str;
//    cout << (isHaveCapitalLetters(str) ? "Yes" : "No") << endl;
//    return 0;
//}

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void myToLower(string &str) {
    for (auto &c : str)
        if (isupper(c))
            c = tolower(c);
}

int main() {
    string str;
    cin >> str;
    myToLower(str);
    cout << str << endl;
    return 0;
}