// Liquidity Ratios
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float CR (float CA, float CL);
float QR (float CE, float MS, float AR, float CL);
main() {
    float CE = 500000.00, MS = 750000.00, AR = 150000.00, OT = 1500000;
    float CA = (CE+MS+AR+OT), CL = 450000.00;
    char *title[] = {"LIQUIDITY SHEET"};
    char *asset_title[] = {"Cash", "Marketable Securities", "Accounts Receivables", "Inventory"};
    char *debt_title[] = {"Accounts Payables", "Accrued Expenses", "Notes Payables", "Long-term Debt"};
    float asset_data[]= {500000.00, 750000.00, 150000.00, 1500000.00};
    float debt_data[]= {450000.00, 120000.00, 100000.00, 500000.00};
    double total_n = 0.00, total_m = 0.00;
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << setw(60) << title[0] << endl;
    for(int i = 0; i <= 102; i++){
        cout << '_';
    }cout << endl ;
    for(int i = 0; i < 4; i++){
        cout << setw(25) << asset_title[i]
             << setw(25) << asset_data[i]
             << setw(2) << '|'
             << setw(25) << debt_title[i]
             << setw(25) << debt_data[i]
             << endl;
             total_n+=asset_data[i];
             total_m+=debt_data[i];
    }
    cout << setw(25) << "TOTAL"
             << setw(25) << total_n
             << setw(2) << '|'
             << setw(25) << "TOTAL"
             << setw(25) << total_m
             << endl ;
    cout << setw(25) << "Quick Ratio"
             << setw(25) << QR(asset_data[0],asset_data[1],asset_data[2], total_m)
             << setw(2) << ' '
             << setw(25) << "Current Ratio"
             << setw(25) << CR(total_n, total_m)
             << endl << endl ;
}
float CR (float CA, float CL) { // Current Ratio
    return CA / CL;
}
float QR (float CE, float MS, float AR, float CL) { // Quick Ratio
    return (CE + MS + AR) / CL;
}
