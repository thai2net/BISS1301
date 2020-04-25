// Ratio Analysis
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// Liquidity Ratios
float CR (float CA, float CL);
float QR (float CE, float MS, float AR, float CL);
// Activity Ratios
float ITR (float CoGS, float ACoIn);
float TATR (float Sales, float ATAs);
float FATR (float Sales, float AFAs);
float ARTR (float NCSs, float AARs);
// Leverage Ratios
float DR (float TLs, float TAs);
float DtoER (float TLs, float TSE);
float TIER (float EBIT, float IE) ;
float FCCR (float EBIT, float FCBT, float i);
// Profitability Ratios
float GPM (float NS, float CoGS);
float NPM (float NP, float NS);
float ROI (float NP, float TI);
float ROA (float NI, float ATAs);
float ROE (float NI, float ASE);
// Common Shares
float EPS (float NI, float PDs, float EoPCSO);
float PER (float MVPS, float EPS);
float DPR (float DP, float NI) ;
float DY (float DPS, float MVPS);

main() {
    float CE = 500000.00, MS = 750000.00, AR = 150000.00, OT = 1500000;
    float CA = (CE+MS+AR+OT), CL = 450000.00;
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << setw(15) << "Current Ratio" << setw(15) << CR (CA, CL) << endl;
    cout << setw(15) << "Quick Ratio" << setw(15) << CR (CE+MS+AR, CL) << endl;
}

// Liquidity Ratios
float CR (float CA, float CL) { // Current Ratio
    return CA / CL;
}
float QR (float CE, float MS, float AR, float CL) { // Quick Ratio
    return (CE + MS + AR) / CL;
}
// Activity Ratios
float ITR (float CoGS, float ACoIn) { // Inventory Turnover Ratio
    return CoGS / ACoIn;
}
float TATR (float Sales, float ATAs) { // Total Assets Turnover Ratio
    return Sales / ATAs;
}
float FATR (float Sales, float AFAs) { // Fixed Assets Turnover Ratio
    return Sales / AFAs;
}
float ARTR (float NCSs, float AARs) { // Account Receivables Turnover Ratio
    return NCSs / AARs;
}
// Leverage Ratios
float DR (float TLs, float TAs) { // Debt Ratio
    return TLs / TAs * 100;
}
float DtoER (float TLs, float TSE) { // Debt-to-Equity Ratio
    return TLs / TSE;
}
float TIER (float EBIT, float IE) { // Times Interest Earned Ratio
    return EBIT / IE;
}
float FCCR (float EBIT, float FCBT, float i) { // Fixed-Charge Coverage Ratio
    return (EBIT + FCBT) / (FCBT + i);
}
// Profitability Ratios
float GPM (float NS, float CoGS) { // Gross Profit Margin
    return (NS - CoGS) / (NS * 100);
}
float NPM (float NP, float NS) { // Net Profit Margin
    return (NP / NS) * 100;
}
float ROI (float NP, float TI) { // Return on Investment
    return (NP / TI) * 100;
}
float ROA (float NI, float ATAs) { // Return on Assets
    return (NI / ATAs) * 100;
}
float ROE (float NI, float ASE) { // Return on Equity
    return (NI / ASE) * 100;
}
// Common Shares
float EPS (float NI, float PDs, float EoPCSO) { // Earning per Share
    return (NI - PDs) / EoPCSO;
}
float PER (float MVPS, float EPS) { // Price-Earning Ratio
    return MVPS / EPS;
}
float DPR (float DP, float NI) { // Dividend Payout Ratio
    return DP / NI;
}
float DY (float DPS, float MVPS) { // Dividend Yield
    return DPS / MVPS * 100;
}









