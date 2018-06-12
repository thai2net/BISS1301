#include <iostream> // โปรแกรมที่ 3.3 แสดงวิธีการใช้งานฟังก์ชันคำนวณภาษีมูลค่าเพิ่ม
using namespace std;
float cal_vat(float price, float rate);
main() {
    cout << cal_vat(1000,7);
}
float cal_vat(float price, float rate) { 
        return price * rate / 100;
}