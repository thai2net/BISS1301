// Simple Linear Regression Method -- SLRegression.cpp
#include <iostream>
#include <iomanip>
using namespace std;
double AVG (double data[], int n);
double Slope (double data1[], double data2[], double avgSale, double avgDebt, int n);
double Constant (double b, double avgSale, double avgDebt);
double SLRegression (double a, double b, double x);
main() {
    char *title[] = {"YEAR (t)", "SALES", "DEBTS"};
    char *row_title[] = {"ACTUAL", "FORCAST", "MODEL"};
    double sale_data[]= {450000.00, 505000.00, 650000.00, 665000.00, 750000.00};
    double debt_data[]= {55000.00, 65000.00, 66000.00, 67500.00, 69000.00};
    int n = sizeof(sale_data)/sizeof(double);
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(50) << "SIMPLE LINEAR REGRESSION METHOD" << endl << endl;
    cout << setw(20) << title[0] << setw(20) << title[1] << setw(20) << title[2] << endl;
    cout << setw(10) << row_title[0] << endl;
    for(int i = 0; i < n; i++){
        cout << setw(20) << i+1
             << setw(20) << sale_data[i] << setw(20) << debt_data[i] << endl;
    }
    double FS = 800000.00;
    double avgSale = AVG (sale_data, n);
    double avgDebt = AVG (debt_data, n);
    double b = Slope (debt_data, sale_data, avgSale, avgDebt, n);
    double a = Constant (b, avgSale, avgDebt);
    cout << setw(10) << row_title[1] << endl;
        cout << setw(20) << n+1
             << setw(20) << FS
             << setw(20) << SLRegression (a, b, FS) << endl;
    cout << setw(10) << row_title[2] << endl;
    cout << setw(20) << "Y = " << a << '+' << b << '*' << 'X' << endl;
}
double SLRegression (double a, double b, double x) {
    return a+(b*x);
}
double Constant (double b, double avgSale, double avgDebt) {
    return avgDebt-(b*avgSale);
}
double Slope (double debt_data[], double sale_data[], double avgSale, double avgDebt, int n) {
    double sum1=0, sum2=0;
    for(int i = 0; i < n; i++){
        sum1+=((sale_data[i]-avgSale)*(debt_data[i]-avgDebt));
        sum2+=((sale_data[i]-avgSale)*(sale_data[i]-avgSale));
    }
    return sum1/sum2;
}
double AVG (double data[], int n) {
    double sum=0.00;
    for(int i = 0; i < n; i++){
        sum+=data[i];
    }
    return sum/n;
}
