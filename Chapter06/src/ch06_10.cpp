#include <stdio.h>  // โปรแกรมที่ 6.10 แสดงการใช้งานโครงสร้างคำสั่ง break
#include <stdlib.h>             	
main() {	
    int x;	
    while(1) {	// ค่า 1 แทนด้วยเงื่อนไขเป็นจริง
             x = rand();	// สุ่มค่าตัวเลขด้วยคำสั่ง rand();
             printf("%d\n", x);	// แสดงค่าตัวเลขที่สุ่ม
             if(x > 20000)	// เมื่อเงื่อนไข x > 20000
             break;	// break เพื่อออกจากการวนรอบ while
     }	
     printf("Broke out of the while loop") ;	// แสดงข้อความ 
}	  // Broke out of the while loop