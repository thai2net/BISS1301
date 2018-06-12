#include <stdio.h>	// โปรแกรมที่ 6.8 แสดงการใช้งานโครงสร้างคำสั่งวนรอบทำซ้ำ do...while()
main() {	
       int i = 1;	// ประกาศตัวแปรจำนวนเต็ม i = 1
      do {	
              printf("Round: %d\n", i);	  // แสดงผลลัพธ์ Round i
              i++;	  // i = i+1
       } while (i <= 5)	
}	