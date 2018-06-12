#include <stdio.h>	// โปรแกรมที่ 6.3 แสดงการใช้งานโครงสร้างคำสั่งทางเลือก if()...else แบบไม่ใช้บล็อก
main() {	
         int x = 5, y = 5;	
         if(x != y)	// เมื่อ x ไม่เท่ากับ y
                  printf("%d is not equal to %d", x, y);	
         else	
                  printf("%d is equal to %d", x, y);	
}	