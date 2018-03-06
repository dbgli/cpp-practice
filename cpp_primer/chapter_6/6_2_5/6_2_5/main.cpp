//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(int argc, char *argv[]) {
//    string str = argv[1];
//    str += argv[2];
//    cout << str << endl;
//    cin.get();   //pause
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(int argc, char *argv[]) {
//    string str;
//    for (int i = 1; i != argc; ++i)
//        str += argv[i];
//    cout << str << endl;
//    cin.get();   //pause
//    return 0;
//}

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "argc = " << argc << endl;
    for (int i = 0; i != argc; ++i)
        cout << "argv[" << i << "] = " << argv[i] << endl;
    cin.get();   //pause
    return 0;
}