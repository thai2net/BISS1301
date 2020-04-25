// BASIC to STRAIGHT-LINE DEPRECIATION -- DepreciationSLN_1.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float DP_SLN (float cost, float salvage, int n);
main() {
    int n = 5; // ระยะโครงการ (ปี)
    float cost = 500000.00; // ราคาทุน
    float salvage = 50000.00; // ราคาขายซาก
    float dep = DP_SLN(cost, salvage, n); // หาค่าเสื่อม
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(40) << "BASIC to STRAIGHT-LINE DEPRECIATION" << endl << endl;
    cout << setw(15) << "COST" << setw(15) << cost << endl;
    cout << setw(15) << "SALVAGE" << setw(15) << salvage << endl << endl;
    cout << setw(15) << "YEAR" << setw(15) << "DEPRECIATION" << endl;
    for(int i = 1; i < n+1; i++){
        cout << setw(15) << i
             << setw(15) << dep << endl;
    }
}
float DP_SLN (float cost, float salvage, int n){
    return (cost-salvage)/n; // หาค่าเสื่อมวิธีเส้นตรงอย่างง่าย
}
