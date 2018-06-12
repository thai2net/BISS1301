#include <stdio.h> // โปรแกรมที่ 8.4 แสดงวิธีการสร้างลิงค์ลีสต์แบบทิศทางเดียว
#include <string.h> 
main() { 
   struct EMPLOYEE {                 
         char empCode[11];              
         char empName[50];   
         int expYear;              
         EMPLOYEE *nxt;              
    };
    EMPLOYEE emp1, emp2, *p, *temp; 
    p = temp = &emp1;                                   
    strcpy(temp -> empCode, "EMP001"); 
    strcpy(temp -> empName, "Jack Ma"); 
    temp -> expYear = 10; 
    temp -> nxt = &emp2; 
    temp = &emp2;                                       
    strcpy(temp -> empCode, "EMP002"); 
    strcpy(temp -> empName, "Mark Zuckerberg"); 
    temp -> expYear = 15; 
    temp -> nxt = NULL; 
    printf("Code: %s Name: %s Expeirence: %d\n",  
            p -> empCode, p -> empName, p -> expYear); 
    printf("Code: %s Name: %s Expeirence: %d\n",  
            p -> nxt -> empCode, p -> nxt -> empName, p -> nxt -> expYear); 
}