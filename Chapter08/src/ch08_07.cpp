#include <stdio.h> // โปรแกรมที่ 8.7 แสดงวิธีการเขียนไฟล์ด้วยคำสั่ง putc()
main() {
    char name[] = "Wanda Maximoff";            
    FILE *fp = fopen("name.txt", "w");          // เปิดแฟ้มข้อมูล name.txt เพื่อเขียนทับ         
    for(int i = 0; i < sizeof(name)-1; i++) {   // วนรอบ
        putc(name[i], fp);                      // เขียนอักขระ name[i]           
    }                                           // ไปยังแฟ้มข้อมูล name.txt ที่เปิดไว้
    fclose(fp);  // ปิดแฟ้มข้อมูล                                          
}	