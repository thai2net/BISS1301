// FIFO Inventory -- FiFoInventory.cpp
#include <string.h>
#include <iostream>
#include <iomanip>
using namespace std;
typedef struct { // ประกาศโครงสร้างล็อต
    char date[50];
    char code[50];
    int amount;
    float price;
} ProductLot;
float strtof (const char* str, char** endptr);
void SetLot(char lot_date[50], char lot_code[50], int lot_amount, float lot_price);
void CutLot(int n);
void InventoryPrice();
int current_lot = 0;
ProductLot BabyFood[12]; // ประกาศใช้ตัวแปรโครงสร้างเพื่อจัดเก็บข้อมูล
main() { // จำลองลำดับเหตุการณ์
    SetLot("01-01-20XX", "BF001", 100, 4.00); InventoryPrice(); // Business ACT I
    SetLot("15-01-20XX", "BF001", 50, 4.50);InventoryPrice(); // Business ACT II
    CutLot(80);InventoryPrice(); // Business ACT III
    CutLot(25);InventoryPrice(); // Business ACT IV
}
void SetLot(char lot_date[50], char lot_code[50],int lot_amount, float lot_price){
    strcpy(BabyFood[current_lot].date, lot_date);
    strcpy(BabyFood[current_lot].code, lot_code);
    BabyFood[current_lot].amount = lot_amount;
    BabyFood[current_lot].price = lot_price;
    current_lot++;
} // ตั้งค่า Stock เริ่มต้น
void CutLot(int n){ // ตัด Stock
    for(int i = 0; i < current_lot; i++){
      if(n <= BabyFood[i].amount){
        BabyFood[i].amount = BabyFood[i].amount - n;
        n = 0; // CutDONE
      }else{
        n = n - BabyFood[i].amount;
        BabyFood[i].amount = 0;
      }
    }
}
void InventoryPrice(){ // คำนวนและแสดงผลแบบ FIFO
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(65) << "INVENTORY PRICE" << endl;
    for(int i = 0; i < 115; i++){cout << '-';}cout << endl;
    cout << setw(34) << "STOCK ID"
           << setw(20) << "AMOUNT"
           << setw(20) << "UNIT PRICE"
           << setw(20) << "LOT PRICE"
           << setw(20) << "CUMULATIVE PRICE" << endl;
    float inv = 0.00; bool chk = false;
    float total_inv = 0.00;
    for(int i = 0; i < current_lot; i++){
        if(chk == false){
            inv = BabyFood[0].amount * BabyFood[0].price;
            total_inv = inv;
            chk = true;
        }else{
            inv = inv + (BabyFood[i].amount * BabyFood[i].price);
            total_inv += inv;
        }
      cout << setw(20) << BabyFood[i].code << '-' << BabyFood[i].date << '(' << i << ')'
           << setw(20) << BabyFood[i].amount
           << setw(20) << BabyFood[i].price
           << setw(20) << BabyFood[i].amount * BabyFood[i].price
           << setw(20) << inv << endl;
    }
    for(int i = 0; i < 115; i++){cout << '-';}cout << endl;
}

