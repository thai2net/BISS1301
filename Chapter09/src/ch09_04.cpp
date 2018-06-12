#include <stdio.h> // โปรแกรมที่ 9.4 แสดงวิธีประเมินมูลค่าอนาคต
#include <conio.h>
float getFV(float PV, float rate);
main() {
    float FV = 0.00, PV = 0.00, rate = 0.00; int year = 0;
    printf("Future Value Calculator\n");
    printf("Input Present Value:"); scanf("%f", &PV);
    printf("Input Interest Rate (percent):"); scanf("%f", &rate);
    printf("Input Year:"); scanf("%d", &year);
    printf("STATEMENT\n");
    printf("End of Year %d: %.2fB\n", 0, PV);
    for(int i = 1; i<=year; i++, PV = FV) {
        printf("End of Year %d: %.2fB\n", i, FV=getFV(PV, rate));
    }
}
float getFV(float PV, float rate) {
    return PV*(1+(rate/100.00));
}