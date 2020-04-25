 // Productivity -- Productivity.cpp
#include <stdio.h>
float TP(float PO, float TF);
float VAP(float NPO, float OP);
main(){
    float ProductOutput = 4600000.00; //สินค้าที่ผลิตได้ (บาท)
    float LaborCost = 440000.00; // ค่าแรงงาน
    float MachineryCost = 500000.00; // ค่าเครื่องจักร
    float BuildingCost = 400000.00 ; // ค่าสถานที่
    float MaterialCost = 1700000.00; // ค่าวัตถุดิบ
    printf("%55s\n\n","PRODUCTIVITY");  // ส่วนแสดงผลและรับค่า
    printf("%50s %.2f\n","Production (BATH):", ProductOutput);
    printf("%50s %.2f\n","Labor Cost:", LaborCost);
    printf("%50s %.2f\n","Machinery Cost:", MachineryCost);
    printf("%50s %.2f\n","Building Cost:", BuildingCost);
    printf("%50s %.2f\n","Material Cost:", MaterialCost);
    printf("\n%50s %.2f X\n", "TOTAL PRODUCTIVITY:", TP(ProductOutput, LaborCost+MachineryCost+BuildingCost+MaterialCost));
    printf("%50s %.2f X\n", "VALUE-ADDED PRODUCTIVITY:", VAP(ProductOutput-MaterialCost, LaborCost+MachineryCost+BuildingCost));
}
float TP(float PO, float TF){ // ผลิตภาพรวม
    return (PO/TF);
}
float VAP(float NPO, float OP){ // ผลิตภาพมูลค่าเพิ่ม
    return (NPO/OP);
}
