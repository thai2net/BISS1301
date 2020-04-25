// Simple Linear Regression Method
#include <stdio.h>
using namespace std;
double AVG (double data[], int n);
double Slope (double data1[], double data2[], double avgSale, double avgDebt, int n);
double Constant (double b, double avgSale, double avgDebt);
double SLRegression (double a, double b, double x);
main() {
    double CS = 0.00; // สำหรับรับค่าดาดการณ์ยอดขายรวมในปีต่อไป
    char *title[] = {"YEAR (t)", "SALES", "DEBTS"};
    char *row_title[] = {"ACTUAL", "FORCAST", "MODEL"};
    double sale_data[]= {450000.00, 505000.00, 650000.00, 665000.00, 750000.00};
    double debt_data[]= {55000.00, 65000.00, 66000.00, 67500.00, 69000.00};
    int n = sizeof(sale_data)/sizeof(double);
    printf("%20s%20s%20s\n", title[0], title[1], title[2]);
    printf("%10s\n", row_title[0]);
    for(int i = 0; i < n; i++){
        printf("%20d%20.2f%20.2f\n", i+1, sale_data[i], debt_data[i]);
    }
    double avgSale = AVG (sale_data, n);
    double avgDebt = AVG (debt_data, n);
    double b = Slope (debt_data, sale_data, avgSale, avgDebt, n);
    double a = Constant (b, avgSale, avgDebt);
    printf("\n%30s", "ENTER YOUR FORECAST SALE: "); scanf("%lf", &CS);
    printf("%10s\n", row_title[1]);
    printf("%20d%20.2f%20.2f\n", n+1, CS, SLRegression (a, b, CS));
    printf("%10s\n", row_title[2]);
    printf("%20s%f%c%f%c\n", "Y = ", a, '+', b, 'X');
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
