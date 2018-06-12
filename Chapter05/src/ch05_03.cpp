#include <stdio.h>	// โปรแกรมที่ 5.3 แสดงการใช้ฟังก์ชัน scanf() บังคับการรับค่า
main() {     	
    int x; 	
    printf("Enter integer number:");	// แสดงข้อความ “Enter integer number: ”
    scanf("%d", &x);	// ให้รับค่าจำนวนเต็ม แล้ว enter
    printf("x = %d\n", x);	// แสดงค่าตัวแปรจำนวนเต็ม x ที่รับมา
}	