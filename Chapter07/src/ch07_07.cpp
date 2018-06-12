#include <stdio.h> // โปรแกรมที่ 7.7 แสดงวิธีการเขียนโครงสร้างแบบยูเนียนเพื่อจัดสรรพื้นที่ของโครงสร้างข้อมูล
#include <string.h> 
main() { 
    union {
           struct {
               char name[50];
               char faculty[100];
           };
           struct {
               char university[100];
               char address[100];
           };
    } u;                                       
    strcpy(u.name, "Tony Stark");
    strcpy(u.faculty, " Information Systems and Technology");
    printf("Name: %s\n", u.name);
    printf("Address1: %s\n", u.faculty);
    strcpy(u.university, "Massachusetts Institute of Technology");
    strcpy(u.address, "77 Massachusetts Ave, Cambridge, MA 02139, USA");
    printf("University: %s\n", u.university); 
    printf("Address2: %s", u.address); 
}