//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    const vector<string> scores = { "F","D","C","B","A","A++" };
//    int grade;
//    cout << "grade: ";
//    cin >> grade;
//    string lettergrade;
//    if (grade < 60)
//        lettergrade = scores[0];
//    else {
//        lettergrade = scores[(grade - 50) / 10];
//        if (grade != 100)
//            if (grade % 10 > 7)
//                lettergrade += '+';
//            else if (grade % 10 < 3)
//                lettergrade += "-";
//    }
//    cout << "lettergrade: " << lettergrade << endl;
//    return 0;
//}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    const vector<string> scores = { "F","D","C","B","A","A++" };
    int grade;
    cout << "grade: ";
    cin >> grade;
    string lettergrade;
    (grade < 60) ? (
        lettergrade = scores[0]
    ):(
        lettergrade = scores[(grade - 50) / 10],
        (grade != 100) ? (
            (grade % 10 > 7) ? (
                lettergrade += '+'
            ):(
                (grade % 10 < 3) ? (
                    lettergrade += '-'
                ):(
                    lettergrade
                )
            )
        ):(
            lettergrade
        )
    );
    cout << "lettergrade: " << lettergrade << endl;
    return 0;
}