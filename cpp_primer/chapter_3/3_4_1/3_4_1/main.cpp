//#include <iostream>
//#include <vector>
//#include <string>
//#include <cctype>
//
//using namespace std;
//
//int main() {
//    vector<string> svec{ "123", "qwe", ",./", "Zxc", "zXc", "zxC", "ASD", "", "iop", "JKL" };
//    //string str;
//    //while (cin >> str)
//    //    svec.push_back(str);
//    for (auto vit = svec.begin(); vit != svec.end() && !(*vit).empty(); vit++) {
//        for (auto sit = vit->begin(); sit != vit->end(); sit++)
//            *sit = toupper(*sit);
//        cout << *vit << endl;
//    }
//    return 0;
//}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ivec = { 0,1,2,3,4,5,6,7,8,9 };
    for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); it++) {
        *it *= 2;
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}