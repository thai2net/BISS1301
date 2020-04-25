// The Percentage of Sales Method -- PercentageofSales.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float CurrentPoS (float target, float sales);
float ForcastPoS (float p, float sales);
main() {
    char *title[] = {"ITEMS", "CERRENT VALUE", "PERCENTAGE of SALES", "FORCAST VALUE"};
    char *row_title[] = {"SALES", "ASSETS", "DEBTS"};
    char *asset_title[] = {"Cash", "Accounts receivables" , "Inventory" , "Machinery"};
    char *debt_title[] = {"Accounts Payables", "Accrued Expenses"};
    float asset_data[]= {150000.00, 205000.00, 450000.00, 1650000.00}; // ยอดขาย
    float debt_data[]= {155000.00, 65000.00}; // หนี้สิน
    float CS = 12500000.00; // ยอดปีเป้าหมาย
    float FS = 0.00; // สำหรับรับค่าคาดการณ์ยอดขาย
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(60)<< "THE PERCENTAGE OF SALES METHOD" << endl;
    cout << setw(60)<< "Enter Your Forecast Value: "; cin >> FS;
    cout << setw(30) << title[0] << setw(20) << title[1] << setw(20)
         << title[2] << setw(20) << title[3] << endl;
    cout << setw(10) << row_title[0] << endl;
    cout << setw(30) << "Sales" << setw(20) << CS
         << setw(20) << '-' << setw(20) << FS << endl;
    cout << setw(10) << row_title[1] << endl;
    for(int i = 0; i < sizeof(asset_data)/sizeof(float); i++){
        cout << setw(30) << asset_title[i]
             << setw(20) << asset_data[i]
             << setw(19) << CurrentPoS (asset_data[i], CS) << '%'
             << setw(20) << ForcastPoS(CurrentPoS (asset_data[i], CS), FS)
             << endl;
    }
    cout << setw(10) << row_title[2] << endl;
    for(int i = 0; i < sizeof(debt_data)/sizeof(float); i++){
        cout << setw(30) << debt_title[i]
             << setw(20) << debt_data[i]
             << setw(19) << CurrentPoS (debt_data[i], CS) << '%'
             << setw(20) << ForcastPoS(CurrentPoS (debt_data[i], CS), FS)
             << endl;
    }
}
float CurrentPoS (float target, float sales) { // ร้อยละของยอดขาย
      return (target/sales*100);
}
float ForcastPoS (float p, float sales) { // ค่าคาดการณ์
      return (p*sales/100);
}
