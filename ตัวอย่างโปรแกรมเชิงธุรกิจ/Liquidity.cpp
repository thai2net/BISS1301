// Liquidity Ratios – Liquidity.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float CR (float CA, float CL);
float QR (float QA, float CL);
main(){
    float CashOnHand = 4000.00; // เงินสดในมือ
    float CashBalance = 100450.00; // เงินสดคงเหลือ
    float KrungThaiBank = 250000.00; // ธนาคารกรุงไทย เลข บช. xxxx
    float AccountsReceivable = 110550.00; // ลูกหนี้การค้า (ทั่วไป)
    float Inventory = 100000.00; // สินค้าคงเหลือ
    float AccountsPayable = 94450; // เจ้าหนี้การค้า (ทั่วไป)
    float SaleTax = 1050.00; // เจ้าหนี้ภาษีการค้า
    float CA = CashOnHand+CashBalance+KrungThaiBank+AccountsReceivable+Inventory;
    float QA = CA - Inventory;
    float CL = AccountsPayable + SaleTax;
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(25) << "LIQUIDITY RATIOS"<< endl;
    cout << setw(20) << "CURRENT RATIO: " << CR(CA, CL) << 'X' << endl;
    cout << setw(20) << "QUICK RATIO: " << QR(QA, CL) << 'X' << endl;
}
float CR (float CA, float CL) { // อัตราส่วนสินทรัพย์หมุนเวียน
    return CA/CL;
}
float QR (float QA, float CL) { // อัตราส่วนสินทรัพย์หมุนเวียนเร็ว
    return QA/CL;
}

