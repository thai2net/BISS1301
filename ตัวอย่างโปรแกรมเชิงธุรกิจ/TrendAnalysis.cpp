// Trend Analysis Method -- TrendAnalysis.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float TrendAnalysis (float target, float based);
main() {
    char *title[] = {"ASSETS", "YEAR Y", "YEAR Y+1", "YEAR Y+2", "YEAR Y+3", "YEAR Y+4"};
    char *item_title[] = {"Sales", "Net Profit"};
    float item_data[2][5] = { // อาเรย์ 2 มิติ
        {146500.00, 165000.00, 182000.00, 185700.00, 250200.00},
        {12500.00 ,  13200.00, 13500.00 , 13200.00 , 22500.00}};
    int n = 5, row = 2; // จำนวนปี, จำนวนแถว
    cout << setw(60) << "TREND ANALYSIS METHOD" << endl << endl;
    for(int i = 0; i < n+1; i++){
        cout << setw(15) << title[i];
    }   cout << endl;
        cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    for(int i = 0; i < row; i++){
        cout << setw(15) << item_title[i];
        for(int j = 0; j < n; j++){
        cout
            << setw(15) << item_data[i][j];
        } cout << endl;
    } cout << endl;
    for(int i = 0; i < row; i++){
        cout << setw(15) << item_title[i];
        for(int j = 0; j < n; j++){
        cout
            << setw(14) << TrendAnalysis(item_data[i][j],item_data[i][0]) << '%';
        } cout << endl;
    }
}
float TrendAnalysis (float target, float based) { // คำนวณร้อยละของปีฐาน
      return (target/based*100);
}
