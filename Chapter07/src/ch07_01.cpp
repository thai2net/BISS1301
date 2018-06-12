#include <iostream>  // โปรแกรมที่ 7.1 แสดงการจัดสรรพื้นที่ของตัวแปรแบบอาเรย์ 
using namespace std;
main() {
    int x1, x2, x3, x4, x5;        // ประกาศตัวแปรแบบปกติ
    int x[5];                           // ประกาศตัวแปรแบบอาเรย์
    cout << "Address: x1, x2, x3, x4 and x5" << endl;
    cout << &x1 << endl;
    cout << &x2 << endl;
    cout << &x3 << endl;
    cout << &x4 << endl;
    cout << &x5 << endl;
    cout << "Address: int x[5]" << endl;
    cout << &x[0] << endl;
    cout << &x[1] << endl;
    cout << &x[2] << endl;
    cout << &x[3] << endl;
    cout << &x[4];
}