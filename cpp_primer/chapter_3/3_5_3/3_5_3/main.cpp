//#include <iostream>
//#include <iterator>
//
//using namespace std;
//
//int main() {
//    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//    int *pbeg = begin(arr), *pend = end(arr);
//    while (pbeg != pend)
//        *pbeg++ = 0;
//    for (int n : arr)
//        cout << n << " ";
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    cout << "arr1: ";
//    int arr1[5] = {};
//    for (int &n : arr1)
//        cin >> n;
//    cout << "arr2: ";
//    int arr2[5] = {};
//    for (int &n : arr2)
//        cin >> n;
//
//    bool flag = 0;
//    for (int i = 0; i < 5; i++)
//        if (arr1[i] != arr2[i]) {
//            flag = 1;
//            break;
//        }
//    if (flag)
//        cout << "arr1 != arr2" << endl;
//    else
//        cout << "arr1 == arr2" << endl;
//    return 0;
//}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "vec1: ";
    vector<int> vec1(5, 0);
    for (auto &n : vec1)
        cin >> n;
    cout << "vec2: ";
    vector<int> vec2(5, 0);
    for (auto &n : vec2)
        cin >> n;

    if (vec1 == vec2)
        cout << "vec1 == vec2" << endl;
    else
        cout << "vec1 != vec2" << endl;
    return 0;
}