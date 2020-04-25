// Vertical Analysis -- VerticalAnalysis.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float SumItems (float data[], int n);
float PercentItem (float item, float sum);
main() {
    char *title[] = {"ASSETS", "YEAR Y", "YEAR Y-1", "PERCENTAGE Y", "PERCENTAGE Y-1"};
    char *asset_title[] = {"Cash", "Investments", "Receivables", "Inventories"};
    float asset_n[]= {5000.00, 5000.00, 250.00, 2500.00}; // ��¡�÷ҧ����Թ�ջѨ�غѹ
    float asset_m[]= {500.00, 5000.00, 500.00, 250.00}; // ��¡�÷ҧ����Թ�ա�͹˹��
    int n = sizeof(asset_n)/sizeof(float);
    float sum_n = SumItems (asset_n, n); // �Ҽ����
    float sum_m = SumItems (asset_m, n); // �Ҽ����
    cout << setw(50) << "VERTICAL ANALYSIS" << endl;
    for(int i = 0; i < n+1; i++){
        cout << setw(15) << title[i];
    }  cout << endl;
        cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    for(int i = 0; i < n; i++){
        cout << setw(15) << asset_title[i];
        cout << setw(15) << asset_n[i]
             << setw(15) << asset_m[i]
             << setw(14) << PercentItem(asset_n[i],sum_n) << '%' // ��-�ʴ�������
             << setw(14) << PercentItem(asset_m[i],sum_m) << '%' // ��-�ʴ�������
             << endl;
    }
        cout << setw(15) << "TOTAL"; // �����
        cout << setw(15) << sum_n << setw(15) << sum_m
             << setw(14) << "100.00" << '%' << setw(14) << "100.00" << '%'
             << endl;
}
float SumItems (float data[], int n) { // �Ҽ����
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += data[i];
    }
    return sum;
}
float PercentItem (float item, float sum) { // ��������
    return item/sum*100;
}
