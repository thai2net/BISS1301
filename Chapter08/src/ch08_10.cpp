#include <stdio.h> // โปรแกรมที่ 8.10 แสดงวิธีการเขียน-อ่านข้อมูลโครงสร้าง
#include <string.h>
typedef struct { 
    char name[50]; 
    int expYear; 
    float salary; 
} EMPLOYEE;  
main() {
    /// ประกาศและแทนค่าให้กับตัวแปรโครงสร้าง
    EMPLOYEE writeEmp, readEmp; // ประกาศตัวแปร ตามโครงสร้าง EMPLOYEE
    strcpy(writeEmp.name, "Wanda Maximoff"); 
    writeEmp.expYear = 15;  
    writeEmp.salary = 35000.00;
    /// ส่วนเขียนแฟ้มข้อมูล
    FILE *fp = fopen("employee.dat", "w");   
    fwrite(&writeEmp, sizeof(EMPLOYEE), 1,  fp);  
    fclose(fp);           
    /// ส่วนอ่านแฟ้มข้อมูล
    fp = fopen("employee.dat", "r");          
    fread(&readEmp, sizeof(EMPLOYEE), 1,  fp);    
    printf("%s\n", readEmp.name);             
    printf("%d\n", readEmp.expYear);          
    printf("%.2f\n", readEmp.salary);           
    fclose(fp);              
}