//#include <iostream>
//#include <vector>
//#include <iterator>
//
//using namespace std;
//
//int main() {
//    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//    vector<int> ivec1(begin(arr), end(arr));
//    for (auto n : ivec1)
//        cout << n << " ";
//    cout << endl;
//    vector<int> ivec2(arr + 3, arr + 6);
//    for (auto n : ivec2)
//        cout << n << " ";
//    cout << endl;
//    return 0;
//}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ivec{ 0,1,2,3,4,5,6,7,8,9 };
    int arr[10];
    for (int i = 0; i < 10; i++)
        arr[i] = ivec[i];
    for (auto n : arr)
        cout << n << " ";
    cout << endl;
    return 0;
}