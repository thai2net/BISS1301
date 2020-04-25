// Liquidity Ratios � Liquidity.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float CR (float CA, float CL);
float QR (float QA, float CL);
main(){
    float CashOnHand = 4000.00; // �Թʴ����
    float CashBalance = 100450.00; // �Թʴ�������
    float KrungThaiBank = 250000.00; // ��Ҥ�á�ا�� �Ţ ��. xxxx
    float AccountsReceivable = 110550.00; // �١˹���ä�� (�����)
    float Inventory = 100000.00; // �Թ��Ҥ������
    float AccountsPayable = 94450; // ���˹���ä�� (�����)
    float SaleTax = 1050.00; // ���˹�����ա�ä��
    float CA = CashOnHand+CashBalance+KrungThaiBank+AccountsReceivable+Inventory;
    float QA = CA - Inventory;
    float CL = AccountsPayable + SaleTax;
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(25) << "LIQUIDITY RATIOS"<< endl;
    cout << setw(20) << "CURRENT RATIO: " << CR(CA, CL) << 'X' << endl;
    cout << setw(20) << "QUICK RATIO: " << QR(QA, CL) << 'X' << endl;
}
float CR (float CA, float CL) { // �ѵ����ǹ�Թ��Ѿ����ع���¹
    return CA/CL;
}
float QR (float QA, float CL) { // �ѵ����ǹ�Թ��Ѿ����ع���¹����
    return QA/CL;
}

