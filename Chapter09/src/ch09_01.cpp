#include <stdio.h> // โปรแกรมที่ 9.1 แสดงวิธีคำนวณยอดขายสุทธิ
#include <conio.h>
int getNetPrice(int p, int q, int d);
main() {
    int netPrice = 0, price = 0, qty = 0, discount = 5;
    char check;
    do {
        printf("Input Price:"); scanf("%d", &price);
        printf("Input Qty:"); scanf("%d", &qty);
        netPrice = netPrice + getNetPrice(price, qty, discount);
        printf("Net: %dB\n", netPrice);
        printf("Continue? y/n:\n"); check=getch();
    } while (check == 'y');
}
int getNetPrice(int p, int q, int d) {
    return (p*q) - (p*q)*d/100;
}