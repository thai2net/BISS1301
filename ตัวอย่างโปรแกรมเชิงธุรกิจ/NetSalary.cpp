// NetSalary.cpp
#include <windows.h>
#include <stdio.h>
#include <conio.h>
int getOt(int otHr, int otRate);
int getSocial(int salary, int socailRate);
main() {
    int netSalary = 0, salary = 0, otHr = 0, otRate = 60, socialRate = 5;
    char check;
    do {
        system("cls");
        printf("%60s\n\n","NET SALARY CALCULATOR");  // ส่วนแสดงผลและรับค่า
        printf("%50s","Input Current Salary:"); scanf("%d", &salary);
        printf("%50s","Input OT hr.:"); scanf("%d", &otHr);
        netSalary = salary +  getOt(otHr, otRate) - getSocial(salary, socialRate);
        printf("\n%50s\n","SLIP STATEMENT");
        printf("%50s %15dB\n", "Current salary", salary);
        printf("%50s %15dB\n", "Social Rate (5%)", -getSocial(salary, socialRate));
        printf("%50s %15dB\n\n", "Over time", getOt(otHr, otRate));
        printf("%50s %15dB\n", "Net",netSalary);
        printf("%50s","Continue ? y/n:"); check=getch();
    } while (check == 'y');
}
int getOt(int otHr, int otRate) {
    return otHr*otRate;
}
int getSocial(int salary, int socialRate) {
    return salary*socialRate/100;
}
