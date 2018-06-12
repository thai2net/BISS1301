#include <stdio.h> // โปรแกรมที่ 9.6 แสดงวิธีประมาณการกระแสเงินสดสุทธิและมูลค่าสะสม
#include <conio.h>
float getCF_payment(float Price, float CF_int, float rate, int n);
main() {
    float Price, CF_int, CF_payment, CF_final, CF_recive, CF_comulative;
    float rate; int n;
    printf("Net Cash Flow Calculator\n");
    printf("Input Net Price:"); scanf("%f", &Price);
    printf("An initial payment (BAHT):"); scanf("%f", &CF_int);
    CF_comulative = -CF_int;
    printf("Take out a loan (BAHT): %.0fB\n", (Price-CF_int));
    printf("Input Interest Rate (percent):"); scanf("%f", &rate);
    printf("Input number of year for payment:"); scanf("%d", &n);
    CF_payment = getCF_payment(
.Price, CF_int, rate, n);
    printf("Monthly Payment (BAHT): %.4f\n", CF_payment);
    printf("Input Interest Income for Receive per Month (BAHT):"); 
    scanf("%f", &CF_recive);
    printf("Input Interest Net Price for Sell after Final Payment (BAHT):");
    scanf("%f", &CF_final);
    printf("STATEMENT\n");
    printf("%5s %20s %20s %20s %20s\n", "Year", "Cash Flow (Pay)", 
              "Cash Flow (Receive)", "Net Cash Flow", "Comulative CF");
    printf("%5d %20.4fB %20.4fB %20.4fB %20.4fB\n", 0, -CF_int, 0.0000, 
             -CF_int, CF_comulative);
for(int i = 1; i<=n; i++) {
        CF_comulative = CF_comulative+(CF_recive*12-CF_payment*12);
         printf("%5d %20.4fB %20.4fB %20.4fB %20.4fB\n", i, 
            -CF_payment*12, CF_recive*12, CF_recive*12-CF_payment*12, 
           CF_comulative);
    }
    CF_comulative = CF_comulative+CF_final;
    printf("%5d %20.4fB %20.4fB %20.4fB %20.4fB\n", n+1, 0.0000, 
             CF_final, CF_final, CF_comulative);
}
float getCF_payment(float Price, float CF_int, float rate, int n) {
    return ((Price-CF_int)+(((Price-CF_int)*(rate/100))*n))/(n*12);
}