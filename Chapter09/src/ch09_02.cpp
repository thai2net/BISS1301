#include <windows.h> // โปรแกรมที่ 9.2 แสดงวิธีคำนวณจำนวนธนบัตร
#include <stdio.h>
#include <conio.h>
int getNumATM(int w, int s);
main() {
    int withdraw, num1000, num500, num100;
    char check;
    withdraw = num1000 = num500 = num100 = 0;
    do {
        system("cls");
        printf("Input Money:"); scanf("%d", &withdraw);
        if((withdraw >= 100 && withdraw <= 20000) && (withdraw%100==0)) {
            num1000 = getNumATM(withdraw, 1000);
            num500 = getNumATM((withdraw%1000), 500);
            num100 = getNumATM((withdraw%500), 100);
            printf("1000B = %d, 500B = %d 100B = %d\n", 
                    num1000, num500, num100);
        }else {
            printf("can't withdraw %dB\n", withdraw);
        }
        printf("Do you want withdraw? y/n:"); check=getche();
    } while (check == 'y');
}
int getNumATM(int w, int s){
    return w/s;
}