#include <stdio.h> // โปรแกรมที่ 7.5 แสดงวิธีการใช้งานโครงสร้างข้อมูล 
#include <string.h> 
typedef struct { 
    char name[50]; 
    int expYear; 
    float salary; 
} EMPLOYEE;    
main() { 
    EMPLOYEE emp, *p;       
    strcpy(emp.name, "James Rhodes"); 
    emp.expYear = 10;         
    emp.salary = 35000.00;        
    printf ("Name: %s\n", p -> name);    
    printf ("Experience: %d\n", p -> expYear);      
    printf ("Current Sarary: %.2f\n", p -> salary);   
} 