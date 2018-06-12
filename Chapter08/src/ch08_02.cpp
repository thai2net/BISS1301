#include <iostream> // โปรแกรมที่ 8.2 แสดงวิธีการใช้พอยน์เตอร์กับตัวแปรข้อความ
#include <windows.h>                // เพื่อใช้คำสั่งหยุดพัก Sleep()
using namespace std;
int main() {
    char *name = "Natasha Romanoff";    // ประกาศพอยน์เตอร์name 
	cout << name << endl;               // แสดงข้อความ name
	do {                            // วนรอบ 17 ครั้ง
		Sleep(100);                 // หยุดพัก 100 มิลลิวินาที
		cout << *name++;            // แสดงอักขระที่ตำแหน่ง name++
	} while(*name != '\0');         // วนรอบจนกระทั่งอักขระ คือ ‘\0’
    return 0;
}