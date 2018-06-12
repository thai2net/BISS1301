#include <stdio.h> // โปรแกรมที่ 9.5 แสดงวิธีประเมินมูลค่าปัจจุบัน
#include <conio.h>
float getPV(float FV, float rate);
main() {
    float FV = 0.00, PV = 0.00, rate = 0.00; int year = 0;
    printf("Present Value Calculator\n");
    printf("Input Future Value:"); scanf("%f", &FV);
    printf("Input Rate (percent):"); scanf("%f", &rate);
    printf("Input Year:"); scanf("%d", &year);
    printf("STATEMENT\n");
    printf("End of Year %d: %.2fB\n", year, FV);
    for(int i = (year-1); i>=0; i--, FV = PV) {
        printf("End of Year %d: %.2fB\n", i, PV=getPV(FV, rate));
    }
}
float getPV(float FV, float rate) {
    return FV*(1-(rate/100.00));
}