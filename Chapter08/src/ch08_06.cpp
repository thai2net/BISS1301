#include <stdio.h> // โปรแกรมที่ 8.6 แสดงวิธีการเปิด-ปิดไฟล์
main() {
    FILE *fp;
    fp = fopen ("product.txt", "r");
if(fp == NULL) {                             // ถ้าไม่สามารถเปิดแฟ้มข้อมูลได้ 
        printf("File not exist\n");            // แสดงข้อความว่า File not exist
    } else {
        fclose(fp);
    }
}