#include <iostream>
//#include <string>
#include "Sales_data.h"

using namespace std;

int main() {
    Sales_data book1, book2;
    cin >> book1.isbn >> book1.units_sold >> book1.price;
    cin >> book2.isbn >> book2.units_sold >> book2.price;
    book1.revenue = book1.units_sold * book1.price;
    book2.revenue = book2.units_sold * book2.price;
    if (book1.isbn == book2.isbn) {
        unsigned totalCnt = book1.units_sold + book2.units_sold;
        double totalRevenue = book1.revenue + book2.revenue;
        cout << book1.isbn << " " << totalCnt << " " << totalRevenue << " ";
        if (totalCnt != 0) {
            cout << totalRevenue / totalCnt << endl;
        } else {
            cout << "No sales" << endl;
        }
    } else {
        cerr << "Data must refer to the same ISBN!" << endl;
        return -1;
    }
    return 0;
}