#include <stdio.h> // โปรแกรมที่ 8.8 แสดงวิธีการอ่านไฟล์ด้วยคำสั่ง getc()
main() {
    char ch;                    
    FILE *fp = fopen("name.txt", "r");      // เปิดแฟ้มข้อมูล name.txt เพื่ออ่าน
    do {                                    // วนรอบ          
        ch = getc(fp);                      // อ่านค่าอักขระจากแฟ้มข้อมูลไว้ที่ตัวแปร ch         
        printf("%c", ch);                   // แสดงค่าอักขระ ch บนจอภาพ                    
    } while(ch != EOF);                     // วนรอบเมื่อตัวอักขระ ch ไม่เท่ากับ EOF              
    fclose(fp);                             // ปิดแฟ้มข้อมูล                             
}	