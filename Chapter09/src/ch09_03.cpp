#include <stdio.h> // โปรแกรมที่ 9.3 แสดงวิธีคำนวณเงินค่าตอบแทนสุทธิ
#include <conio.h>
int getOt(int otHr, int otRate);
int getSocial(int salary, int socailRate);
main() {
    int netSalary = 0, salary = 0, otHr = 0, otRate = 60, socialRate = 5;
    char check;
    do {
        printf("Input Current Sarary:"); scanf("%d", &salary);
        printf("Input OT hr.:"); scanf("%d", &otHr);
        netSalary = salary +  getOt(otHr, otRate) - getSocial(salary, socialRate);
        printf("Slip Statement\n\n");
        printf("%20s %15dB\n", "Current salary", salary);
        printf("%20s %15dB\n", "Social Rate (5%)", -getSocial(salary, socialRate));
        printf("%20s %15dB\n\n", "Over time", getOt(otHr, otRate));
        printf("%20s %15dB\n", "Net",netSalary);
        printf("Continue ? y/n:"); check=getch();
    } while (check == 'y');
}
int getOt(int otHr, int otRate) {
    return otHr*otRate;
}
int getSocial(int salary, int socialRate) {
    return salary*socialRate/100;
}