#include <iostream> // โปรแกรมที่ 3.6 แสดงวิธีการเรียกใช้งานฟังก์ชันเรียกใช้งานตัวเอง
using namespace std;
int Factorial(int n);                       // ประกาศรูปแบบการเรียกใช้
main() {
    int n = 5;
    cout << n << "! = " << Factorial(n); // ฟังก์ชันหลักเรียกใช้ฟังก์ชันย่อย
}
int Factorial(int n) {                       // ประกาศฟังก์ชันย่อย
    if(n==1 or n==0) {  
         return 1;
    } else {
         return n*Factorial(n-1);     // ฟังก์ชันเรียกใช้งานตันเอง
    }
}