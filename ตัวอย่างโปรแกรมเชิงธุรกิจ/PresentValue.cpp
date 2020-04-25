// Basic to Present Value -- PresentValue.cpp
#include <stdio.h>
#include <conio.h>
float getPV(float FV, float rate);
main() {
    float FV = 0.00, PV = 0.00, rate = 0.00; int year = 0; // ประกาศตัวแปรเก็บค่า
    printf("%50s\n","PRESENT VALUE CALCULATOR");
    printf("%50s","Input Future Value:"); scanf("%f", &FV);
    printf("%50s","Input Rate (percent):"); scanf("%f", &rate);
    printf("%50s","Input Year:"); scanf("%d", &year);
    printf("\n%38s\n","STATEMENT");
    printf("%40s %d: %.2fB\n","End of Year", year, FV);
    for(int i = (year-1); i>=0; i--, FV = PV) {
        printf("%40s %d: %.2fB\n","End of Year", i, PV=getPV(FV, rate));
    }
}
float getPV(float FV, float rate) { // หามูลค่าปัจจุบัน
    return FV*(1-(rate/100.00));
}
