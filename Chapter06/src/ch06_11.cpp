#include <stdio.h>  // โปรแกรมที่ 6.11 แสดงการใช้งานโครงสร้างคำสั่ง continue
#include <conio.h>  	
main() {	
    int sw = 0;	
    char ch;	
while(1) { 
    if(sw==0) {
        printf("\nSwitch is OFF\n");
    }else{
        printf("\nSwitch is ON\n");
        break;
    }
    printf("Do you want to turn on Switch? (please press y or any key)");
    if((ch = getch()) == 'y') {
        sw = 1;
    } else {
        continue;
    }
}