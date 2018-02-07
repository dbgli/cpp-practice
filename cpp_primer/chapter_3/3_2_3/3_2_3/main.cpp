//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string str;
//    cin >> str;
//    for (auto &c : str)   //char
//        c = 'X';
//    cout << str << endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string str;
//    cin >> str;
//    string::size_type n = 0;
//    while (n < str.size()) {
//        str[n] = 'X';
//        n++;
//    }
//    cout << str << endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string str;
//    //cout << str[0] << endl;
//    cin >> str;
//    for (string::size_type n = 0; n < str.size(); n++)
//        str[n] = 'X';
//    cout << str << endl;
//    return 0;
//}

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str, result;
    cin >> str;
    for (auto c : str)
        if (!ispunct(c))
            result += c;
    cout << result << endl;
    return 0;
}