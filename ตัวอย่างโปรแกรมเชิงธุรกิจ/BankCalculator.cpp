// BankCalculator.cpp
#include <windows.h>
#include <stdio.h>
#include <conio.h>
int getNumATM(int w, int s);
main() {
    int withdraw, num1000, num500, num100; // ������纼��Ѿ��
    char check;
    withdraw = num1000 = num500 = num100 = 0; // ��˹�������������ҡѺ 0
    do { // ǹ�ͺẺ do..while()
        system("cls");
        printf("%50s\n\n","ATM CALCULATOR");  // ��ǹ�ʴ�������Ѻ���
        printf("%50s","Input Money:"); scanf("%d", &withdraw);
        if((withdraw >= 100 && withdraw <= 20000) && (withdraw%100==0)) {
            num1000 = getNumATM(withdraw, 1000);
            num500 = getNumATM((withdraw%1000), 500);
            num100 = getNumATM((withdraw%500), 100);
            printf("%50s 1000B = %d, 500B = %d 100B = %d\n",
                   "GET:", num1000, num500, num100);
        }else {
            printf("can't withdraw %dB\n", withdraw);
        }
        printf("%50s","Do you want withdraw? y/n:"); check=getche(); // �Ѻ��ҵ�Ǩ�ͺ���ǹ�ͺ
    } while (check == 'y');
}
int getNumATM(int w, int s){ // �ӹǳ�ӹǹ���ѵ�
    return w/s;
}
