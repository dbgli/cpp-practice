//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string str;
//    //getline(cin, str);
//    cin >> str;
//    cout << str << endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string str1, str2;
//    cin >> str1 >> str2;
//    //if (str1 == str2)
//    if (str1.size() == str2.size())
//        //cout << "str1=str2" << endl;
//        cout << "str1.size=str2.size" << endl;
//    else
//        //if (str1 > str2)
//        if (str1.size() > str2.size())
//            //cout << str1 << " is bigger" << endl;
//            cout << str1 << " is longer" << endl;
//        else
//            //cout << str2 << " is bigger" << endl;
//            cout << str2 << " is longer" << endl;
//    return 0;
//}

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    while (cin >> str1)
        //str2 += str1;
        str2 += str1 + ' ';
    cout << str2 << endl;
    return 0;
}