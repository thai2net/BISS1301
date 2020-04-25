// Moving Average Method -- MovingAverage.cpp
#include <stdio.h>
int main() {
    int avg = 3; // ��駤�Ҩӹǹ��ǧ㹡�÷Ӥ�����������͹���
    n = 10; // �ӹǹ��
    double sale_data[]= {350000.00, 405000.00, 430000.00, 435000.00, 440000.00, 450000.00, 505000.00, 650000.00, 665000.00, 750000.00, 0.00, 0.00}; // �ش�����Ũ�ԧ
    double sale_ma[n+1]; // �ش������ MA
    printf("%50s\n\n", "MOVING AVERAGE METHOD");
    printf("%20s%20s%20s\n", "YEAR (t)", "SALES", "MA(3)");
    for(int i = 0; i < n+2; i++){
        if(i>avg-1){
            if(i>=n){
               sale_data[i] = sale_ma[i-1];
            }
            sale_ma[i] = (sale_data[i-1]+sale_data[i-2]+sale_data[i-3])/avg;
        } else {
            sale_ma[i] = 0;
        }
        printf("%20d%20.2lf%20.2lf\n", i+1, sale_data[i], sale_ma[i]);
    }
    return 0;
}
