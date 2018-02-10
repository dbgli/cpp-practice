//#include <iostream>
//
//using namespace std;
//
//int main() {
//    cout << "arr1: ";
//    int arr1[10];
//    for (int i = 0; i < 10; i++)
//        arr1[i] = i;
//    for (auto n : arr1)
//        cout << n << " ";
//    cout << endl;
//
//    cout << "arr2: ";
//    int arr2[10];
//    for (int i = 0; i < 10; i++)
//        arr2[i] = arr1[i];
//    for (auto n : arr2)
//        cout << n << " ";
//    cout << endl;
//    return 0;
//}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "vec1: ";
    vector<int> vec1;
    for (int i = 0; i < 10; i++)
        vec1.push_back(i);
    for (auto n : vec1)
        cout << n << " ";
    cout << endl;

    cout << "vec2: ";
    vector<int> vec2;
    vec2 = vec1;
    for (auto n : vec2)
        cout << n << " ";
    cout << endl;
    return 0;
}