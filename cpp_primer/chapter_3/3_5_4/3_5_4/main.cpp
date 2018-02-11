//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    cout << "str1: ";
//    string str1;
//    cin >> str1;
//    cout << "str2: ";
//    string str2;
//    cin >> str2;
//
//    if (str1 == str2)
//        cout << "str1 == str2" << endl;
//    else if (str1 < str2)
//        cout << "str1 < str2" << endl;
//    else
//        cout << "str1 > str2" << endl;
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main() {
//    cout << "ca1: ";
//    char ca1[6] = {};
//    for (int i = 0; i < 5; i++)
//        cin >> ca1[i];
//    cout << "ca2: ";
//    char ca2[6] = {};
//    for (int i = 0; i < 5; i++)
//        cin >> ca2[i];
//
//    if (strcmp(ca1, ca2) == 0)
//        cout << "ca1 == ca2" << endl;
//    else if (strcmp(ca1, ca2) < 0)
//        cout << "ca1 < ca2" << endl;
//    else
//        cout << "ca1 > ca2" << endl;
//    return 0;
//}

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char ca1[] = "Hello";
    const char ca2[] = "World";
    char ca3[12] = {};
    strcpy(ca3, ca1);
    strcat(ca3, ca2);
    for (auto c : ca3)
        cout << c;
    cout << endl;
    return 0;
}