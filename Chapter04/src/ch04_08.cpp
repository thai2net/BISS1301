#include <iostream> // โปรแกรมที่ 4.8 แสดงวิธีการเขียนใช้งานตัวดำเนินการแทนค่า
using namespace std;
main() {
    int x; 
    bool a, b = true;
    x = 10; x+=5; cout << x << endl;
    x = 10; x-=5; cout << x << endl;
    x = 10; x*=5; cout << x << endl;
    x = 10; x/=5; cout << x << endl;
    x = 10; x%=5; cout << x << endl;
    a = true; a&=b; cout << a << endl;
    a = true; a|=b; cout << a << endl;
}