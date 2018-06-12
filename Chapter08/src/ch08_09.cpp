#include <stdio.h> // โปรแกรมที่ 8.9 แสดงวิธีเขียน-อ่าน ข้อมูลตามรูปแบบที่กำหนด
main() {       
    char stdCode[] = "9999999999";
    char stdName[] = "Peter";
    char stdSurname[] = " Parker";
    int stdAge = 16;
    FILE *fp = fopen("student.txt", "w");        /// เปิดแฟ้มข้อมูลเพื่อเขียนทับ                          
    fprintf(fp, "%s %s %s %d", stdCode, stdName, stdSurname, stdAge);  
///เขียนแฟ้มข้อมูลตามรูปแบบ                             
    fclose(fp);                                        ///  ปิดแฟ้มข้อมูล                                                                       
    fp = fopen("student.txt", "r");                     /// เปิดแฟ้มข้อมูลเพื่ออ่าน                          
    fscanf(fp, "%s %s %s %d", stdCode, stdName, stdSurname, &stdAge); 
      /// อ่านแฟ้มข้อมูลตามรูปแบบ 
    printf("%s\n", stdCode);                                         
    printf("%s %s \n", stdName, stdSurname);  ///   แสดงผลลัพธ์                                      
    printf("%.d\n", stdAge);                                        
    fclose(fp);                                          ///  ปิดแฟ้มข้อมูล                                        
}