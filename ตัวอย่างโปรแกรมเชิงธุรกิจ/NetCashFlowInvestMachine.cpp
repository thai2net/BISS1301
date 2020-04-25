// Net Cash Flow - New Machine Project
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
void IntIncome(double income_data[], int n);
void IntOptExpenses(double opt_expenses_data[], int n);
void IntDepMachine(double dep_machine_data[], int n);
void IntNetIncome(double net_income_data[], double income_data[], double opt_expenses_data[], double dep_machine_data[], int n);
void IntIncomeTax(double income_tax_data[], double net_income_data[], int n);
void IntNetProfit(double net_profit_data[], double net_income_data[], double income_tax_data[], int n);
void IntNetCashFlow(double net_cash_flow_data[], double net_profit_data[], double dep_machine_data[], int n);
#define MACHINE 5000000.00
#define INCOME 3000000.00
#define OPT_EXPENSES 300000.00
#define TAX 30.00
main() {
    int n = 10;
    double income_data[n+1], opt_expenses_data[n+1], dep_machine_data[n+1],net_income_data[n+1],income_tax_data[n+1], net_profit_data[n+1], net_cash_flow_data[n+1];
    using namespace std;
    char *title[] = {"NET CASH FLOW-NEW MACHINE PROJECT"};
    char *title_item[] = {"Income", "OptExpenses", "Machine", "NetIncome", "Tax", "NetProfit", "Machine", "NetCashFlow"};
    char *title_opt[] = {"+", "-", "-", "", "-", "", "+", ""};
    IntIncome(income_data, n);
    IntOptExpenses(opt_expenses_data, n);
    IntDepMachine(dep_machine_data, n);
    IntNetIncome(net_income_data, income_data, opt_expenses_data, dep_machine_data, n);
    IntIncomeTax(income_tax_data, net_income_data, n);
    IntNetProfit(net_profit_data, net_income_data, income_tax_data, n);
    IntNetCashFlow(net_cash_flow_data, net_profit_data, dep_machine_data, n);
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << setw(80) << title[0] << endl;
    cout << setw(10) << "YEAR";
    for(int i = 0; i < 8; i++){
        cout << setw(12) << title_item[i];
    }cout << endl;
    cout << setw(10) << " ";
    for(int i = 0; i < 8; i++){
        cout << setw(12) << title_opt[i];
    }cout << endl;
    for(int i = 0; i < n+1; i++){
        cout << setw(10) << i
             << setw(12) << income_data[i]
             << setw(12) << opt_expenses_data[i]
             << setw(12) << dep_machine_data[i]
             << setw(12) << net_income_data[i]
             << setw(12) << income_tax_data[i]
             << setw(12) << net_profit_data[i]
             << setw(12) << dep_machine_data[i]
             << setw(12) << net_cash_flow_data[i]
             << endl;
    }
}
void IntIncome(double income_data[], int n){
    income_data[0] = 0.00;
    for(int i = 1; i < n+1; i++){
        income_data[i] = INCOME;
    }
}
void IntOptExpenses(double opt_expenses_data[], int n){
    opt_expenses_data[0] = 0.00;
    for(int i = 1; i < n+1; i++){
        opt_expenses_data[i] = OPT_EXPENSES;
    }
}
void IntDepMachine(double dep_machine_data[], int n){
    dep_machine_data[0] = MACHINE;
    int sum = 0;
    for(int i = n; i > 0; i--){
        sum+=i;
    }
    int year = n;
    for(int i = 1; i < n+1; i++){
        dep_machine_data[i] = MACHINE*year/sum;
        year--;
    }
}
void IntNetIncome(double net_income_data[], double income_data[], double opt_expenses_data[], double dep_machine_data[], int n){
    net_income_data[0] = 0.00;
    for(int i = 1; i < n+1; i++){
        net_income_data[i] = income_data[i]-opt_expenses_data[i]-dep_machine_data[i];
    }
}
void IntIncomeTax(double income_tax_data[], double net_income_data[], int n){
    income_tax_data[0] = 0.00;
    for(int i = 1; i < n+1; i++){
        income_tax_data[i] = net_income_data[i]*TAX/100;
    }
}
void IntNetProfit(double net_profit_data[], double net_income_data[], double income_tax_data[], int n){
    net_profit_data[0] = 0.00;
    for(int i = 1; i < n+1; i++){
        net_profit_data[i] = net_income_data[i]-income_tax_data[i];
    }
}
void IntNetCashFlow(double net_cash_flow_data[], double net_profit_data[], double dep_machine_data[], int n){
    for(int i = 0; i < n+1; i++){
        net_cash_flow_data[i] = net_profit_data[i] + dep_machine_data[i];
    }
}

