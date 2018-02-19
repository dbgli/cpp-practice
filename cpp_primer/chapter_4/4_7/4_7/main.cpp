//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    vector<int> ivec = { 0,1,2,3,4,5,6,7,8,9 };
//    for (auto &i : ivec)
//        cout << (i % 2 == 1 ? i *= 2 : i) << " ";
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    int grade;
//    cin >> grade;
//    string finalgrade = grade >= 90 ? "high pass" : grade >= 75 ? "pass" : grade >= 60 ? "low pass" : "fail";
//    cout << finalgrade << endl;
//    return 0;
//}

#include <iostream>
#include <string>

using namespace std;

int main() {
    int grade;
    cin >> grade;
    string finalgrade;
    if (grade >= 90)
        finalgrade = "high pass";
    else if (grade >= 75)
        finalgrade = "pass";
    else if (grade >= 60)
        finalgrade = "low pass";
    else
        finalgrade = "fail";
    cout << finalgrade << endl;
    return 0;
}