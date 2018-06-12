#include <stdio.h> // โปรแกรมที่ 8.5 แสดงวิธีการสร้างลิงค์ลีสต์แบบสองทาง
#include <string.h>
main() {
   struct EMPLOYEE {                   
         char empCode[11];       
         char empName[50];  
         int expYear;         
         EMPLOYEE *bck, *nxt; 
    } emp1, emp2, *p, *temp;
    p = temp = &emp1;                                   
    strcpy(temp -> empCode, "EMP001");  
    strcpy(temp -> empName, "Jack Ma");  
    temp -> expYear = 10; 
    temp -> bck = NULL; 
    temp -> nxt = &emp2; 
    temp = &emp2;                                      
    strcpy(temp -> empCode, "EMP002");  
    strcpy(temp -> empName, "Mark Zuckerberg");  
    temp -> expYear = 15;  
    temp -> nxt = NULL; 
    temp -> bck = &emp1; 
    printf("Code: %s Name: %s Expeirence: %d\n",  
            p -> nxt -> empCode, p -> nxt -> empName, p -> nxt -> expYear); 
    printf("Code: %s Name: %s Expeirence: %d\n",  
            p -> nxt -> bck -> empCode, 
            p -> nxt -> bck -> empName, 
            p -> nxt -> bck -> expYear);  
}