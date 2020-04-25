// Basic to Future Value -- FutureValue.cpp
#include <stdio.h>
#include <conio.h>
float getFV(float PV, float rate);
main() {
    float FV = 0.00, PV = 0.00, rate = 0.00; int year = 0; // ประกาศตัวแปรเก็บค่า
    printf("%50s\n","FUTURE VALUE CALCULATOR");
    printf("%50s","Input Present Value:"); scanf("%f", &PV);
    printf("%50s","Input Interest Rate (percent):"); scanf("%f", &rate);
    printf("%50s","Input Year:"); scanf("%d", &year);
    printf("\n%38s\n","STATEMENT");
    printf("%40s %d: %.2fB\n","End of Year", 0, PV);
    for(int i = 1; i<=year; i++, PV = FV) {
        printf("%40s %d: %.2fB\n","End of Year", i, FV=getFV(PV, rate));
    }
}
float getFV(float PV, float rate){ // หามูลค่าอนาคต
    return PV*(1+(rate/100.00));
}
