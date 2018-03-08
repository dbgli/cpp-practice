//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool str_subrange(const string &str1, const string &str2) {
//    if (str1.size() == str2.size())
//        return str1 == str2;
//    auto size = str1.size() < str2.size() ? str1.size() : str2.size();
//    for (decltype(size) i = 0; i != size; ++i) {
//        if (str1[i] != str2[i])
//            return 0;
//    }
//    return 1;
//}
//
//int main() {
//    string str1, str2;
//    cin >> str1 >> str2;
//    cout << str_subrange(str1, str2) << endl;
//    return 0;
//}

#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &ivec, vector<int>::size_type index) {
    if (!ivec.empty() && index != ivec.size()) {
        cout << ivec[index] << endl;
        print(ivec, index + 1);
    }
}

int main() {
    vector<int> ivec;
    int i;
    while (cin >> i)
        ivec.push_back(i);
    print(ivec, 0);
    return 0;
}