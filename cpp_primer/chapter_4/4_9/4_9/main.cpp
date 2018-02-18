#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << "bool " << sizeof(bool) << endl;
    cout << "char " << sizeof(char) << endl;
    cout << "short " << sizeof(short) << endl;
    cout << "int " << sizeof(int) << endl;
    cout << "long " << sizeof(long) << endl;
    cout << "long long " << sizeof(long long) << endl;
    cout << "float " << sizeof(float) << endl;
    cout << "double " << sizeof(double) << endl;
    cout << "long double " << sizeof(long double) << endl << endl;

    cout << "int* " << sizeof(int*) << endl;
    cout << "double* " << sizeof(double*) << endl << endl;

    cout << "int& " << sizeof(int&) << endl;
    cout << "double& " << sizeof(double&) << endl << endl;

    cout << "int[10] " << sizeof(int[10]) << endl;
    cout << "string " << sizeof(string) << endl;
    cout << "vector<int> " << sizeof(vector<int>) << endl;
    cout << "vector<double> " << sizeof(vector<double>) << endl;
    return 0;
}