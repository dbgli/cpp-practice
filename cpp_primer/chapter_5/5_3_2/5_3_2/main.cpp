//#include <iostream>
//
//using namespace std;
//
//int main() {
//    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
//    char ch;
//    while(cin>>ch)
//        switch (ch) {
//            case 'a':
//                ++aCnt;
//                break;
//            case 'e':
//                ++eCnt;
//                break;
//            case 'i':
//                ++iCnt;
//                break;
//            case 'o':
//                ++oCnt;
//                break;
//            case 'u':
//                ++uCnt;
//                break;
//            default:
//                break;
//        }
//    cout << "Number of vowel a: " << aCnt << endl
//         << "Number of vowel e: " << eCnt << endl
//         << "Number of vowel i: " << iCnt << endl
//         << "Number of vowel o: " << oCnt << endl
//         << "Number of vowel u: " << uCnt << endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
//    char ch;
//    while (cin >> ch) {
//        if (ch == 'a') ++aCnt;
//        else if (ch == 'e') ++eCnt;
//        else if (ch == 'i') ++iCnt;
//        else if (ch == 'o') ++oCnt;
//        else if (ch == 'u') ++uCnt;
//    }
//    cout << "Number of vowel a: " << aCnt << endl
//         << "Number of vowel e: " << eCnt << endl
//         << "Number of vowel i: " << iCnt << endl
//         << "Number of vowel o: " << oCnt << endl
//         << "Number of vowel u: " << uCnt << endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
//    char ch;
//    while(cin>>ch)
//        switch (ch) {
//            case 'a':
//            case 'A':
//                ++aCnt;
//                break;
//            case 'e':
//            case 'E':
//                ++eCnt;
//                break;
//            case 'i':
//            case 'I':
//                ++iCnt;
//                break;
//            case 'o':
//            case 'O':
//                ++oCnt;
//                break;
//            case 'u':
//            case 'U':
//                ++uCnt;
//                break;
//            default:
//                break;
//        }
//    cout << "Number of vowel a: " << aCnt << endl
//         << "Number of vowel e: " << eCnt << endl
//         << "Number of vowel i: " << iCnt << endl
//         << "Number of vowel o: " << oCnt << endl
//         << "Number of vowel u: " << uCnt << endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, enterCnt = 0;
//    char ch;
//    while(cin>>ch)
//        switch (ch) {
//            case 'a':
//            case 'A':
//                ++aCnt;
//                break;
//            case 'e':
//            case 'E':
//                ++eCnt;
//                break;
//            case 'i':
//            case 'I':
//                ++iCnt;
//                break;
//            case 'o':
//            case 'O':
//                ++oCnt;
//                break;
//            case 'u':
//            case 'U':
//                ++uCnt;
//                break;
//            case ' ':
//                ++spaceCnt;
//                break;
//            case '\t':
//                ++tabCnt;
//                break;
//            case '\n':
//                ++enterCnt;
//                break;
//            default:
//                break;
//        }
//    cout << "Number of vowel a: " << aCnt << endl
//         << "Number of vowel e: " << eCnt << endl
//         << "Number of vowel i: " << iCnt << endl
//         << "Number of vowel o: " << oCnt << endl
//         << "Number of vowel u: " << uCnt << endl
//         << "Number of space: " << spaceCnt << endl
//         << "Number of tab: " << tabCnt << endl
//         << "Number of enter: " << enterCnt << endl;
//    return 0;
//}

#include <iostream>

using namespace std;

int main() {
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch;
    while(cin>>ch)
        switch (ch) {
            case 'f':
                cin >> ch;
                switch (ch) {
                    case 'f':
                        ++ffCnt;
                        break;
                    case 'l':
                        ++flCnt;
                        break;
                    case 'i':
                        ++fiCnt;
                        break;
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    cout << "Number of ff: " << ffCnt << endl
         << "Number of fl: " << flCnt << endl
         << "Number of fi: " << fiCnt << endl;
    return 0;
}