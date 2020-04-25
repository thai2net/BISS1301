// BASIC to SUM OF THE YEARS DIGIT DEPRECIATION -- DepreciationSumYears_1.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float DP_SumYears (float cost, float salvage, int n, int i);
int SumYears (int n);
main() {
    int n = 10; // ระยะโครงการ (ปี)
    float cost = 500000.00; // ราคาทุน
    float salvage = 50000.00; // ราคาขายซาก
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(50) << "BASIC to SUM OF THE YEARS DIGIT DEPRECIATION" << endl << endl;
    cout << setw(15) << "COST" << setw(15) << cost << endl;
    cout << setw(15) << "SALVAGE" << setw(15) << salvage << endl << endl;
    cout << setw(15) << "YEAR" << setw(15) << "DEPRECIATION" << endl;
    for(int i = n, Y = 1; i >= 1; i--, Y++){
        cout << setw(15) << Y
             << setw(15) << DP_SumYears(cost, salvage, n, i) << endl;
    }
}
float DP_SumYears (float cost, float salvage, int n, int i){
    int sum = SumYears(n);
    return (cost-salvage)*i/sum; // ค่าเสื่อมราคาวิธีผลรวมของเลขปี
}
int SumYears (int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum+=i;
    }
    return sum; // ผลรวมเลขปี
}
