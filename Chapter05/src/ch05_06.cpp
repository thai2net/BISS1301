#include <iostream> 	// ส่วนหัวโปรแกรม // โปรแกรมที่ 5.6 แสดงการใช้งานเอาท์พุตคอลโซล-อินพุตคอนโซล
using namespace std;	     // เรียกใช้งานไลบรารี iostream
main() {	     // ประกาศ namespace std
   string name;	// ส่วนโปรแกรมหลัก
   cout << "Enter your name: "; 	    // ประกาศตัวแปรข้อความ
   cin >> name;	    // แสดงข้อความ "Enter your name: "
   cout << "Welcome " 	    // รับข้อความชื่อจากแป้นพิมพ์
         << name << endl; 	    // แสดงข้อความ "Welcome " 
}	    // ตามด้วยชื่อและขึ้นบรรทัดใหม่