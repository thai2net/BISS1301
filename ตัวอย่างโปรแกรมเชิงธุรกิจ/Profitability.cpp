// Profitability -- Profitability.cpp
#include <iostream>
#include <iomanip>
using namespace std;
float GPM(float NS, float CoGS);
float NPM(float NS, float NP);
float ROA(float NP, float ATA);
float ROE(float NI, float ASE);
main() {
    float TotalCoGS = 1500000.00; // ต้นทุนขาย
    float TotalDebitSale = 1350000.00; // ยอดขายเงินสด
    float TotalCreditSale = 1950000.00; // ยอดขายเงินเชื่อ
    float TotalTradeTax  = 45000.00; // ภาษีการค้าจ่าย
    float TotalOperation  = 150000.00; // ค่าดำเนินการ
    float TotalAsset  = 2470000.00; // สินทรัพย์เฉลี่ยรวม
    float TotalEquity  = 5050000.00; // ส่วนผู้ถือหุ้น
    float NetProfit = (TotalDebitSale+TotalDebitSale) - TotalCoGS - TotalOperation - TotalTradeTax;
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(50) << "PROFITABILITY" << endl;
    cout << setw(30) << "TOTAL SALE" << setw(30) << "COST OF GOOD SOLD" << setw(30) << "GROSS PROFIT MARGIN" << endl;
    cout << setw(30) << (TotalDebitSale+TotalCreditSale)
         << setw(30) << ((TotalDebitSale+TotalCreditSale) - TotalCoGS)
         << setw(29) << GPM((TotalDebitSale+TotalCreditSale), ((TotalDebitSale+TotalCreditSale) - TotalCoGS)) << '%' << endl;
    cout << setw(30) << "TOTAL SALE" << setw(30) << "NET PROFIT" << setw(30) << "NET PROFIT MARGIN" << endl;
    cout << setw(30) << (TotalDebitSale+TotalCreditSale)
         << setw(30) << NetProfit
         << setw(29) << NPM((TotalDebitSale+TotalCreditSale), NetProfit) << '%' << endl;
    cout << setw(30) << "TOTAL ASSET" << setw(30) << "NET PROFIT" << setw(30) << "RETURN ON ASSET/INVESTMENT" << endl;
    cout << setw(30) << TotalAsset
         << setw(30) << NetProfit
         << setw(29) << ROA(NetProfit, TotalAsset) << '%' << endl;
    cout << setw(30) << "TOTAL EQUITY" << setw(30) << "NET PROFIT" << setw(30) << "RETURN ON EQUITY" << endl;
    cout << setw(30) << TotalEquity
         << setw(30) << NetProfit
         << setw(29) << ROE(NetProfit, TotalEquity) << '%' << endl;
}
float GPM(float NS, float CoGS){ // อัตรากำไรขั้นต้น
    return (NS-CoGS)/NS*100;
}
float NPM(float NS, float NP){ // อัตรากำไรสุทธิ
    return (NP/NS)*100;
}
float ROA(float NP, float ATA){ // อัตราผลตอบแทนจากสินทรัพย์
    return (NP/ATA)*100;
}
float ROE(float NI, float ASE){ // ผลตอบแทนต่อผู้ถือหุ้น
    return (NI/ASE)*100;
}
