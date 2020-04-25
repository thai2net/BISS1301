// Working Capital -- WorkingCapital.cpp
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int ShowBalance();
int CashCapital(float cash);
int Buy(float cash, float credit);
int Sell(float cash, float credit, float profit);
int CreditOutFlow(float credit);
int CreditInFlow(float credit);
char *title[] = {"BALANCE SHEET"};
char *title_n[] = {"Cash", "Accounts Receivables", "Inventory"};
char *title_m[] = {"Total Capital", "Accounts Payables", "Net Profit"};
double data_n[] = {0.00, 0.00, 0.00}; // เพื่อ Cash, Accounts Receivables, Inventory
double data_m[] = {0.00, 0.00, 0.00}; // เพื่อ Capital, Accounts Payables, Net Profit
int n = 3;
main() {
    CashCapital(1000000); ShowBalance();
    Buy(600000, 100000); ShowBalance();
    Sell(400000, 250000, 30000); ShowBalance();
    CreditOutFlow(100000); ShowBalance();
    CreditInFlow(150000); ShowBalance();
}
int ShowBalance(){
    double total_n = 0.00, total_m = 0.00;
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << setw(50) << title[0] << endl;
    for(int i = 0; i <= 82; i++){
        cout << '_';
    }cout << endl ;
    for(int i = 0; i < 3; i++){
        cout << setw(20) << title_n[i]
             << setw(20) << data_n[i]
             << setw(2) << '|'
             << setw(20) << title_m[i]
             << setw(20) << data_m[i]
             << endl ;
             total_n+=data_n[i];
             total_m+=data_m[i];
    }
    cout << setw(20) << "TOTAL"
             << setw(20) << total_n
             << setw(2) << '|'
             << setw(20) << "TOTAL"
             << setw(20) << total_m
             << endl << endl ;
    return 0;
}
int CashCapital(float cash){ // การเพิ่มทุน
    data_n[0] += cash;
    data_m[0] += cash;
    return 0;
}
int Buy(float cash, float credit){
    data_n[0] -= cash;
    data_m[1] += credit;
    data_n[2] += (cash+credit);
    return 0;
} // รับรายการทางด้านการซื้อสินค้าและบริการ
int Sell(float cash, float credit, float profit){
    data_n[0] += (cash+profit);
    data_n[1] += credit;
    data_m[2] += profit;
    data_n[2] -= (cash+credit);
    return 0;
} // รับรายการทางด้านการขายสินค้าและบริการ
int CreditOutFlow(float credit){ // รับการชำระรายการเจ้าหนี้
    data_n[0] -= credit;
    data_m[1] -= credit;
    return 0;
}
int CreditInFlow(float credit){ // รับชำระรายการลูกหนี้
    data_n[0] += credit;
    data_n[1] -= credit;
    return 0;
}
