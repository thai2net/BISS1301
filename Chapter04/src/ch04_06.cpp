#include <iostream> // โปรแกรมที่ 4.6 แสดงวิธีการเขียนใช้งานตัวดำเนินการบิทไว้ส์
using namespace std;
main() {
    int x=10, y=5; 
    cout << (x&y) << endl;      // 1010 & 0101 = 0000 มีค่าเท่ากับ 0 ฐาน 10
    cout << (x|y) << endl;       // 1010 || 0101 = 1111 มีค่าเท่ากับ 15 ฐาน 10
    cout << (~x) << endl;       // ~1010 = 1…..0101 มีค่าเท่ากับ -11 ฐาน 10
    cout << (x^y) << endl;      // 1010 ^ 0101 = 1111 มีค่าเท่ากับ 15 ฐาน 10
    cout << (x << 1) << endl;  // 1010 << 1 = 10100 มีค่าเท่ากับ 10 ฐาน 10
    cout << (x >> 1);             // 1010 >> 1 = 0101 มีค่าเท่ากับ 5 ฐาน 10
}