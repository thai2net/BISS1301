// SUM OF THE YEARS DIGIT DEPRECIATION -- DepreciationSumYears_RecursiveF.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float DP_SumYears(float cost, float salvage, int n, int i);
int SumYears (int n);
main() {
    int n = 10;
    float cost = 500000.00, salvage = 50000.00;
    cout.setf(ios::fixed, ios::floatfield); // ��駤Ǻ��������ʴ��Ũӹǹ��ԧ
    cout.precision(2); // ��駡���ʴ��ŷȹ��� 2 ���˹�
    cout << setw(50) << "SUM OF THE YEARS DIGIT DEPRECIATION" << endl << endl
         << setw(15) << "COST" << setw(15) << cost << endl
         << setw(15) << "SALVAGE" << setw(15) << salvage << endl << endl
         << setw(15) << "YEAR" << setw(15) << "DEPRECIATION" << endl; // ����شʵ���
    for(int i = n, Y = 1; i >= 1; i--, Y++){
        cout << setw(15) << Y << setw(15) << DP_SumYears(cost, salvage, n, i) << endl; // ����شʵ���
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
        return n+SumYears(n-1); // �ѧ��ѹ���¡��ҹ�ѹ�ͧ
}
