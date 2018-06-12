#include <iostream> // โปรแกรมที่ 3.5 แสดงวิธีการเรียกใช้งานฟังก์ชันย่อยจากฟังก์ชันย่อย
#include <string.h>
using namespace std;
void showHelloWorld();         // ประกาศรูปแบบการเรียกใช้
string getHello();             // ประกาศรูปแบบการเรียกใช้
string getWorld();             // ประกาศรูปแบบการเรียกใช้
main() {
    showHelloWorld();       // การเรียกใช้ฟังก์ชัน
}
void showHelloWorld() {       // ประกาศฟังก์ชันย่อย
     cout << getHello() << "  " << getWorld();   // การเรียกใช้ฟังก์ชัน
}
string getHello() {               // ประกาศฟังก์ชันย่อย
     return "Hello";
}
string getWorld() {              // ประกาศฟังก์ชันย่อย
     return "World";
}