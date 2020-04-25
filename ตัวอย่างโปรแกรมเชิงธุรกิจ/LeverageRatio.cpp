// Leverage Ratio -- LeverageRatio.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float DR(float TLs, float TAs);
float DtoER(float TLs, float TSE);
float TIER(float EBIT, float IE);
float FCCR(float EBIT, float FCBT, float IE);
main() {
    float TotalAsset = 1871000.00; // �Թ��Ѿ�����
    float TotalLiability = 160000.00; // ˹���Թ���
    float TotalEquity = 1050000.00; // ��ǹ�ͧ�����������
    float TotalProfit = 300000.00; // ���� (��͹�ѡ�͡�����������)
    float TotalExpense = 100000.00; // �������»�Ш� (��͹�ѡ����)
    float TotalInterest = 35000; // �͡���¨���
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(50) << "LEVERAGE RATIO" << endl;
    cout << setw(30) << "TOTAL LIABILITY" << setw(30) << "TOTAL ASSET" << setw(30) << "DEBT RATIO" << endl;
    cout << setw(30) << TotalLiability
         << setw(30) << TotalAsset
         << setw(29) << DR(TotalLiability, TotalAsset) << '%' << endl;
    cout << setw(30) << "TOTAL LIABILITY" << setw(30) << "TOTAL EQUITY" << setw(30) << "DEB-TO-EQUITY RATIO" << endl;
    cout << setw(30) << TotalLiability
         << setw(30) << TotalEquity
         << setw(29) << DtoER(TotalLiability, TotalEquity) << 'X' << endl;
    cout << setw(30) << "TOTAL PROFIT" << setw(30) << "TOTAL INTEREST" << setw(30) << "TIMES INTEREST EARNED RATIO" << endl;
    cout << setw(30) << TotalProfit
         << setw(30) << TotalInterest
         << setw(29) << DtoER(TotalProfit, TotalInterest) << 'X' << endl;
cout << setw(30) << "TOTAL PROFIT" << setw(30) << "TOTAL INTERSET AND EXPENSE" << setw(30) << "FIXED-CHARGE COVERAGE RATIO" << endl;
    cout << setw(30) << TotalProfit
         << setw(30) << TotalExpense+TotalInterest
         << setw(29) << FCCR(TotalProfit, TotalExpense, TotalInterest) << 'X' << endl;
}
float DR(float TLs, float TAs){ // �ѵ����ǹ˹���Թ�������Թ��Ѿ�����
    return TLs / TAs * 100;
}
float DtoER(float TLs, float TSE){ // �ѵ����ǹ˹���Թ�����ͼ�������
    return TLs / TSE;
}
float TIER(float EBIT, float IE){ // �ѵ����ǹ��������ö㹡�è��´͡����
    return EBIT / IE;
}
float FCCR(float EBIT, float FCBT, float IE){ // �ѵ����ǹ�Ѵ��������ö��è�������»�Ш�
    return EBIT / (FCBT + IE);
}
