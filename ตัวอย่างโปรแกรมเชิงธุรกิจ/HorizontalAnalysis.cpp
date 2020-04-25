// Horizontal Analysis -- HorizontalAnalysis.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float Diff (float n, float m);
float SumItems (float data[], int n);
main() {
    char *title[] = {"ASSETS", "YEAR Y", "YEAR Y-1", "DIFFERENCE", "PERCENTAGE"};
    char *asset_title[] = {"Cash", "Investments", "Receivables", "Inventory"};
    float asset_n[]= {5000.00, 5000.00, 250.00, 2500.00}; // รายการทางการเงินปีปัจจุบัน
    float asset_m[]= {500.00, 5000.00, 500.00, 250.00}; // รายการทางการเงินปีก่อนหน้า
    int n = sizeof(asset_n)/sizeof(float);
    cout << setw(50) << "HORIZONTAL ANALYSIS" << endl;
    for(int i = 0; i < n+1; i++){
        cout << setw(15) << title[i];
    }   cout << endl;
        cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    for(int i = 0; i < n; i++){
        cout << setw(15) << asset_title[i];
        cout << setw(15) << asset_n[i]
             << setw(15) << asset_m[i]
             << setw(15) << Diff(asset_n[i],asset_m[i])
             << setw(15) << Diff(asset_n[i],asset_m[i])/asset_n[i]*100
             << endl;
    }
        cout << setw(15) << "TOTAL" // ผลรวม
             << setw(15) << SumItems(asset_n, n)
             << setw(15) << SumItems(asset_m, n) << endl;
}
float Diff(float n, float m) { // หาผลต่าง
    return n - m;
}
float SumItems(float data[], int n) { // หาผลรวม
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += data[i];
    }
    return sum;
}
