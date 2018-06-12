#include <stdio.h> // โปรแกรมที่ 9.7 แสดงวิธีประเมินการลงทุนด้วยมูลค่าปัจจุบันสุทธิ
#include <conio.h>
#include <math.h>
float getCF_payment(float Price, float CF_int, float rate, int n);
main() {
    float Price, CF_int, CF_payment, CF_final, rate, CF_recive;
    float NetCashFlow, DiscountRate, PV, NPV;
    int n;
    printf("Net Present Value Calculator\n");
    printf("Input Net Price:"); scanf("%f", &Price);
    printf("An initial payment (BAHT):"); scanf("%f", &CF_int);
    printf("Take out a loan (BAHT): %.0fB\n", (Price-CF_int));
    printf("Input Interest Rate (percent):"); scanf("%f", &rate);
    printf("Input number of year for payment:"); scanf("%d", &n);
    CF_payment = getCF_payment(Price, CF_int, rate, n);
    printf("Monthly Payment (BAHT): %.4f\n", CF_payment);
    printf("Input Interest Income for Receive per Month (BAHT):"); 
    scanf("%f", &CF_recive);
    printf("Input Interest Net Price for Sell after Final Payment (BAHT):"); 
    scanf("%f", &CF_final);
    printf("STATEMENT\n");
    DiscountRate = 1.0000;
    NetCashFlow = -CF_int;
    PV = NetCashFlow / DiscountRate;
    NPV = PV;
    printf("%5s %20s %20s %20s %20s\n", "Year", "Net Cash Flow", 
            "Discount Rate", "Present Value", "Net Present Value");
    printf("%5d %20.4fB %20.4fB %20.4fB %20.4fB\n", 0, -CF_int, 
             1.0000, -CF_int, NPV);
    for(int i = 1; i<=n; i++) {
        DiscountRate = pow((1+(rate/100.00)), i);
        NetCashFlow = (CF_recive*12-CF_payment*12);
        PV = NetCashFlow / DiscountRate;
        NPV = NPV + PV;
         printf("%5d %20.4fB %20.4fB %20.4fB %20.4fB\n", i, 
                  NetCashFlow, DiscountRate, PV, NPV);
    }
    DiscountRate = pow((1+(rate/100.00)), n+1);
    NetCashFlow = CF_final;
    PV = NetCashFlow / DiscountRate;
    NPV = NPV + PV;
    printf("%5d %20.4fB %20.4fB %20.4fB %20.4fB\n", n+1, 
            NetCashFlow, DiscountRate, PV, NPV);
}
float getCF_payment(float Price, float CF_int, float rate, int n) {
    return ((Price-CF_int)+(((Price-CF_int)*(rate/100))*n))/(n*12);
}