#include <iostream> // โปรแกรมที่ 3.4 แสดงวิธีการใช้งานฟังก์ชันย่อยจากฟังก์ชันหลัก
using namespace std;
void showHello();                   // ประกาศรูปแบบการเรียกใช้
void showWorld();                  // ประกาศรูปแบบการเรียกใช้
main() {
    showHello();
    showWorld();
}
void showHello() {                 // ประกาศฟังก์ชันย่อย
     cout << "Hello";
}
void showWorld() {                // ประกาศฟังก์ชันย่อย
     cout << "World";
}