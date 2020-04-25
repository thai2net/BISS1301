// Total Sales -- TotalSaleList.cpp
#include <stdio.h>
#include <conio.h>
int getNetPrice(int p, int q, int d);
main() {
    int netPrice = 0, price = 0, qty = 0, discount = 5;
    char check;
    do {
        printf("%50s","Input Price: "); scanf("%d", &price);
        printf("%50s","Input Qty: "); scanf("%d", &qty);
        netPrice = netPrice + getNetPrice(price, qty, discount);
        printf("%50s %dB\n","Net:", netPrice);
        printf("%50s", "Continue? y/n:\n"); check=getch();
    } while (check == 'y');
}
int getNetPrice(int p, int q, int d) {
    return (p*q) - (p*q)*d/100;
}
