#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2, rsp;
    do {
        cout << "Please enter two strings: ";
        cin >> str1 >> str2;
        if (str1.size() <= str2.size())
            cout << str1 << endl;
        else
            cout << str2 << endl;
        cout << "More? Enter yes or no: ";
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');
    return 0;
}