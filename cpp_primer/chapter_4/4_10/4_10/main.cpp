#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ivec(10);
    vector<int>::size_type cnt = ivec.size();
    for (decltype(cnt) ix = 0; ix != ivec.size(); ++ix, --cnt)
        ivec[ix] = cnt;
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;
    return 0;
}