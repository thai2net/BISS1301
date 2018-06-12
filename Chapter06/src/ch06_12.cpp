#include <stdio.h>  // โปรแกรมที่ 6.12 แสดงการใช้งานโครงสร้างคำสั่ง goto
#include <conio.h>  			
main() {
beginp:
    char ch;
    printf("Do you want to end program? (please press y / any key)");
    if((ch = getch()) == 'y'){
        goto endp;
    }else {
        printf("\nLet\'s continue\n");
        goto beginp;
    }
endp: 
    printf("\nGood bye\n");
}