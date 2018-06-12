#include <iostream> // โปรแกรมที่ 4.2 แสดงวิธีการเขียนใช้งานตัวดำเนินการทางคณิตศาสตร์
using namespace std;
main() {
    int x = 10, y = 3; 
    cout << x << "+-" << y << " = " << x+-y << endl;
    cout << x << "+" << y << " = " << x+y << endl;
    cout << x << "-" << y << " = " << x-y << endl;
    cout << x << "*" << y << " = " << x*y << endl;
    cout << x << "/" << y << " = " << x/y << endl;
    cout << x << "%" << y << " = " << x%y << endl;
    cout << x << "+" << y << "*" << 3 << "+" << 2 
          << " = " << x+y*3+2 << endl;
    cout << x << "+" << y << "*" << "(" << 3 << "+" << 2 << ")" 
          << " = " << x+y*(3+2);
}