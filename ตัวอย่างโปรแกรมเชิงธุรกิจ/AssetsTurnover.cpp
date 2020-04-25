// Assets Turnover -- AssetsTurnover.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float TATR (float TS, float TA);
float FATR (float TS, float TFA);
float RTR (float NCS, float AR);
float ITR (float CoGS, float ACoIn);
main() {
    float Cash = 150000.00; // �Թʴ
    float AccountsReceivables = 1205000.00; // �١˹���ä��
    float Inventory = 1650000.00; // �Թ��Ҥ���ѧ
    float Machinery = 350000.00; // ����ͧ�ѡ�
    float Building = 650000.00; // �Ҥ��
    float TotalDebitSale = 1350000.00; // �ʹ����Թʴ
    float TotalCreditSale = 1950000.00; // �ʹ����Թ����
    float BoP_Receivable = 45000.00; // �١˹��鹧Ǵ
    float EoP_Receivable = 12000.00; // �١˹����§Ǵ
    float BoP_Inventory = 150000.00; // ��ѧ�Թ��ҵ鹧Ǵ
    float EoP_Inventory = 106000.00; // ��ѧ�Թ��һ��§Ǵ
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(60) << "ASSETS TURNOVER REPORT" << endl;
    cout << setw(30) << "TOTAL SALEs" << setw(30) << "TOTAL ASSETs" << setw(30) << "TOTAL ASSET TURNOVER" << endl;
    cout << setw(30) << (TotalDebitSale+TotalCreditSale)
         << setw(30) << (Cash+AccountsReceivables+Inventory+Machinery+Building)
         << setw(30) << TATR((TotalDebitSale+TotalCreditSale), (Cash+AccountsReceivables+Inventory+Machinery+Building)) << " X" << endl;
    cout << setw(30) << "TOTAL SALEs" << setw(30) << "FIXED ASSETs" << setw(30) << "FIXED ASSET TURNOVER" << endl;
    cout << setw(30) << (TotalDebitSale+TotalCreditSale)
         << setw(30) << (Machinery+Building)
         << setw(30) << FATR((TotalDebitSale+TotalCreditSale), (Machinery+Building)) << " X" << endl;
    cout << setw(30) << "TOTAL CREDIT SALEs" << setw(30) << "AVERAGE RECEIVABLE" << setw(30) << "RECEIVABLE TURNOVER" << endl;
    cout << setw(30) << TotalCreditSale
         << setw(30) << (BoP_Receivable+EoP_Receivable)/2
         << setw(30) << RTR(TotalCreditSale, (BoP_Receivable+EoP_Receivable)/2) << " X" << endl
         << setw(90) << 365/RTR(TotalCreditSale, (BoP_Receivable+EoP_Receivable)/2) << " days" << endl;
    cout << setw(30) << "TOTAL COST INVENTORY" << setw(30) << "AVERAGE INVENTORY" << setw(30) << "INVENTORY TURNOVER" << endl;
    cout << setw(30) << Inventory
         << setw(30) << (BoP_Inventory+EoP_Inventory)/2
         << setw(30) << ITR(Inventory, (BoP_Inventory+EoP_Inventory)/2) << " X" << endl
         << setw(90) << 365/ITR(Inventory, (BoP_Inventory+EoP_Inventory)/2) << " days" << endl;
}
float TATR(float TS, float TA){ // �ѵ����ǹ�����ع���¹�ͧ�Թ��Ѿ�����
      return (TS/TA);
}
float FATR(float TS, float TFA){ // �ѵ����ǹ�����ع���¹�ͧ�Թ��Ѿ�����
    return TS/TFA;
}
float RTR(float NCS, float AR){ // �ѵ����ǹ��ع���¹�١˹���ä��
    return NCS/AR;
}
float ITR(float CoGS, float ACoIn){ // ѵ����ǹ��ع���¹�Թ��Ҥ���ѧ
    return CoGS/ACoIn;
}

