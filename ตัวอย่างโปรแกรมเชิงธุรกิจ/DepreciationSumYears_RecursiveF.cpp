// SUM OF THE YEARS DIGIT DEPRECIATION -- DepreciationSumYears_RecursiveF.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float DP_SumYears(float cost, float salvage, int n, int i);
int SumYears (int n);
main() {
    int n = 10;
    float cost = 500000.00, salvage = 50000.00;
    cout.setf(ios::fixed, ios::floatfield); // ตั้งควบคุวมการแสดงผลจำนวนจริง
    cout.precision(2); // ตั้งการแสดงผลทศนิยม 2 ตำแหน่ง
    cout << setw(50) << "SUM OF THE YEARS DIGIT DEPRECIATION" << endl << endl
         << setw(15) << "COST" << setw(15) << cost << endl
         << setw(15) << "SALVAGE" << setw(15) << salvage << endl << endl
         << setw(15) << "YEAR" << setw(15) << "DEPRECIATION" << endl; // สิ้นสุดสตรีม
    for(int i = n, Y = 1; i >= 1; i--, Y++){
        cout << setw(15) << Y << setw(15) << DP_SumYears(cost, salvage, n, i) << endl; // สิ้นสุดสตรีม
    }
}
float DP_SumYears (float cost, float salvage, int n, int i){
    int sum = SumYears(n);
    return (cost-salvage)*i/sum;
}
int SumYears (int n){
    if(n==1)
         return 1;
    else
        return n+SumYears(n-1); // ฟังก์ชันเรียกใช้งานตันเอง
}
