// Vertical Analysis -- VerticalAnalysis.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float SumItems (float data[], int n);
float PercentItem (float item, float sum);
main() {
    char *title[] = {"ASSETS", "YEAR Y", "YEAR Y-1", "PERCENTAGE Y", "PERCENTAGE Y-1"};
    char *asset_title[] = {"Cash", "Investments", "Receivables", "Inventories"};
    float asset_n[]= {5000.00, 5000.00, 250.00, 2500.00}; // รายการทางการเงินปีปัจจุบัน
    float asset_m[]= {500.00, 5000.00, 500.00, 250.00}; // รายการทางการเงินปีก่อนหน้า
    int n = sizeof(asset_n)/sizeof(float);
    float sum_n = SumItems (asset_n, n); // หาผลรวม
    float sum_m = SumItems (asset_m, n); // หาผลรวม
    cout << setw(50) << "VERTICAL ANALYSIS" << endl;
    for(int i = 0; i < n+1; i++){
        cout << setw(15) << title[i];
    }  cout << endl;
        cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    for(int i = 0; i < n; i++){
        cout << setw(15) << asset_title[i];
        cout << setw(15) << asset_n[i]
             << setw(15) << asset_m[i]
             << setw(14) << PercentItem(asset_n[i],sum_n) << '%' // หา-แสดงร้อยละ
             << setw(14) << PercentItem(asset_m[i],sum_m) << '%' // หา-แสดงร้อยละ
             << endl;
    }
        cout << setw(15) << "TOTAL"; // ผลรวม
        cout << setw(15) << sum_n << setw(15) << sum_m
             << setw(14) << "100.00" << '%' << setw(14) << "100.00" << '%'
             << endl;
}
float SumItems (float data[], int n) { // หาผลรวม
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += data[i];
    }
    return sum;
}
float PercentItem (float item, float sum) { // หาร้อยละ
    return item/sum*100;
}
