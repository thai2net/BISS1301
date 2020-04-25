// SUM OF THE YEARS DIGIT DEPRECIATION -- DepreciationSumYears_2.cpp
#include <iostream>
#include <iomanip>
using namespace std;
void DP_SumYears (float dep_data[], float cost, float salvage, int n);
main() {
    int n = 10; // อายุการใช้งาน
    float cost = 1000000.00; // ราคาต้นทุน
    float salvage = 50000.00; // ราคาขายซาก
    float dep_data[n+1]; // ตัวแปรเก็บผลลัพธ์
    char *title[] = {"SUM OF THE YEARS DIGIT DEPRECIATION"};
    DP_SumYears(dep_data, cost, salvage, n);
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(45) << title[0] << endl << endl;
    cout << setw(20) << "COST" << setw(15) << cost << endl;
    cout << setw(20) << "SALVAGE" << setw(15) << salvage << endl << endl;
    cout << setw(20) << "YEAR" << setw(15) << "DEPRECIATION" << endl;
    for(int i = 0; i < n+1; i++){
        cout << setw(20) << i << setw(15) << dep_data[i] << endl;
    }
}
void DP_SumYears (float dep_data[], float cost, float salvage, int n){
    dep_data[0] = 0.00;
    int sum = 0;
    for(int i = n; i > 0; i--){
        sum+=i;
    }
    int year = n, y = n;
    for(int i = 1; i < n+1; i++){
        dep_data[i] = (cost-salvage)*y/sum; // ใช้วนรอบหาค่าเสื่อมราคา
        y--;
    }
}
