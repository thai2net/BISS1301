#include <stdio.h> // โปรแกรมที่ 7.6 แสดงวิธีการเขียนโครงสร้างข้อมูลชั้นซ้อน
#include <string.h> 
main() { 
   struct BDATE {                  
        int dd;
        int mm;
        int yyyy;
    };
    struct EMPLOYEE {             
        char name[50];
        struct BDATE birthdate;
    } emp, *p;                                        
    strcpy(emp.name, "James Rhodes"); 
    emp.birthdate.dd = 10; 
    emp.birthdate.mm = 11; 
    emp.birthdate.yyyy = 1969; 
    p =  &emp;                
    printf("Name: %s\n", p -> name); 
    printf("Birthdate: %d-%d-%d\n", p -> birthdate.dd, 
            p -> birthdate.mm, p -> birthdate.yyyy); 
}