//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string arr3[10] = { "", "", "", "", "", "", "", "", "", "" };
//
//string (&foo(string (&arr1)[10], string (&arr2)[10], string str))[10] {
//    try {
//        for (const auto s : arr1)
//            if (s == str)
//                return arr1;
//        for (const auto s : arr2)
//            if (s == str)
//                return arr2;
//        throw(runtime_error("输入字符串不属于任何数组"));
//    } catch (runtime_error err) {
//        cout << err.what() << endl;
//        return arr3;
//    }
//}
//
//int main() {
//    string arr1[10] = { "qwe", "asd", "zxc", "123", "456", "789", ",./", "ASD", "Asd", "aSD" };
//    string arr2[10] = { "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "uvw", "xyz", "123" };
//    string str;
//    cin >> str;
//    for (const auto s : (foo(arr1, arr2, str)))
//        cout << s << " ";
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
////typedef string arr[10];
//using arr = string[10];
//
//string arr3[10] = { "", "", "", "", "", "", "", "", "", "" };
//
//arr &foo(arr &arr1, arr &arr2, string str) {
//    try {
//        for (const auto s : arr1)
//            if (s == str)
//                return arr1;
//        for (const auto s : arr2)
//            if (s == str)
//                return arr2;
//        throw(runtime_error("输入字符串不属于任何数组"));
//    } catch (runtime_error err) {
//        cout << err.what() << endl;
//        return arr3;
//    }
//}
//
//int main() {
//    string arr1[10] = { "qwe", "asd", "zxc", "123", "456", "789", ",./", "ASD", "Asd", "aSD" };
//    string arr2[10] = { "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "uvw", "xyz", "123" };
//    string str;
//    cin >> str;
//    for (const auto s : (foo(arr1, arr2, str)))
//        cout << s << " ";
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string arr3[10] = { "", "", "", "", "", "", "", "", "", "" };
//
//auto foo(string (&arr1)[10], string (&arr2)[10], string str)->string (&)[10] {
//    try {
//        for (const auto s : arr1)
//            if (s == str)
//                return arr1;
//        for (const auto s : arr2)
//            if (s == str)
//                return arr2;
//        throw(runtime_error("输入字符串不属于任何数组"));
//    } catch (runtime_error err) {
//        cout << err.what() << endl;
//        return arr3;
//    }
//}
//
//int main() {
//    string arr1[10] = { "qwe", "asd", "zxc", "123", "456", "789", ",./", "ASD", "Asd", "aSD" };
//    string arr2[10] = { "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "uvw", "xyz", "123" };
//    string str;
//    cin >> str;
//    for (const auto s : (foo(arr1, arr2, str)))
//        cout << s << " ";
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string arr3[10] = { "", "", "", "", "", "", "", "", "", "" };
//
//decltype(arr3) &foo(decltype(arr3) &arr1, decltype(arr3) &arr2, string str) {
//    try {
//        for (const auto s : arr1)
//            if (s == str)
//                return arr1;
//        for (const auto s : arr2)
//            if (s == str)
//                return arr2;
//        throw(runtime_error("输入字符串不属于任何数组"));
//    } catch (runtime_error err) {
//        cout << err.what() << endl;
//        return arr3;
//    }
//}
//
//int main() {
//    string arr1[10] = { "qwe", "asd", "zxc", "123", "456", "789", ",./", "ASD", "Asd", "aSD" };
//    string arr2[10] = { "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "uvw", "xyz", "123" };
//    string str;
//    cin >> str;
//    for (const auto s : (foo(arr1, arr2, str)))
//        cout << s << " ";
//    cout << endl;
//    return 0;
//}

#include <iostream>

using namespace std;

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };

decltype(odd) &arrPtr(int i) {
    return i % 2 ? odd : even;
}

int main() {
    int i;
    cin >> i;
    for (const auto n : arrPtr(i))
        cout << n << " ";
    cout << endl;
    return 0;
}