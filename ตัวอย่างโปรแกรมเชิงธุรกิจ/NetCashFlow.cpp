// Net Cash Flow Statement -- NetCashFlow.cpp
#include <stdio.h>
#include <conio.h>
float getCF_payment(float Price, float CF_int, float rate, int n);
main() {
    float Price; // �Ҥ��Թ��Ѿ�����
    float CF_int; // �����Թʴ
    float CF_payment; // �Թʴ����
    float CF_recive; // �Թʴ�Ѻ
    float CF_final; // �Ҥ��Թ��Ѿ����
    float CF_cumulative; // ������Թʴ�ط������
    float rate; // �ѵ�Ҵ͡�����Թ���
    int n; // ���������ç���
    printf("%60s\n","NET CASH FLOW CALCULATOR");
    printf("%60s","Input Commercial Building Price:"); scanf("%f", &Price);
    printf("%60s","An Initial Cash Payment (BAHT):"); scanf("%f", &CF_int);
    CF_cumulative = -CF_int; // ������Թʴ�ط�������������
    printf("%60s%.0f\n","Take Out a Loan (BAHT):", (Price-CF_int));
    printf("%60s","Input Interest Rate (percent):"); scanf("%f", &rate);
    printf("%60s","Input Number of Year for Payment:"); scanf("%d", &n);
    CF_payment = getCF_payment(Price, CF_int, rate, n);
    printf("%60s%.4f\n","Monthly Payment (BAHT):", CF_payment);
    printf("%60s","Input Interest Income for Receive per Month (BAHT):");
    scanf("%f", &CF_recive);
    printf("%60s","Input Interest Building Price for Sell (BAHT):");
    scanf("%f", &CF_final);
    printf("%25s","NET CASH FLOW STATEMENT\n");
    printf("%5s %20s %20s %20s %20s\n", "Year", "Cash Outflow (Pay)",
              "Cash Inflow (Receive)", "Net Cash Flow", "Cumulative CF");
    printf("%5d %20.4fB %20.4fB %20.4fB %20.4fB\n", 0, -CF_int, 0.0000,
             -CF_int, CF_cumulative);
    for(int i = 1; i<=n; i++) { // ǹ�ͺ�ʴ���
        CF_cumulative = CF_cumulative+(CF_recive*12-CF_payment*12);
        printf("%5d %20.4fB %20.4fB %20.4fB %20.4fB\n", i,
        -CF_payment*12, CF_recive*12, CF_recive*12-CF_payment*12,CF_cumulative);
    }
    CF_cumulative = CF_cumulative+CF_final;
    printf("%5d %20.4fB %20.4fB %20.4fB %20.4fB\n", n+1, 0.0000,
             CF_final, CF_final, CF_cumulative);
}
float getCF_payment(float Price, float CF_int, float rate, int n) {
    return ((Price-CF_int)+(((Price-CF_int)*(rate/100))*n))/(n*12);
} // �ӹǳ�Թʴ���������͹
