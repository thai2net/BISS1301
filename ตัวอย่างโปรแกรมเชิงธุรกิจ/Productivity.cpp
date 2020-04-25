 // Productivity -- Productivity.cpp
#include <stdio.h>
float TP(float PO, float TF);
float VAP(float NPO, float OP);
main(){
    float ProductOutput = 4600000.00; //�Թ��ҷ���Ե�� (�ҷ)
    float LaborCost = 440000.00; // ����ç�ҹ
    float MachineryCost = 500000.00; // �������ͧ�ѡ�
    float BuildingCost = 400000.00 ; // ���ʶҹ���
    float MaterialCost = 1700000.00; // ����ѵ�شԺ
    printf("%55s\n\n","PRODUCTIVITY");  // ��ǹ�ʴ�������Ѻ���
    printf("%50s %.2f\n","Production (BATH):", ProductOutput);
    printf("%50s %.2f\n","Labor Cost:", LaborCost);
    printf("%50s %.2f\n","Machinery Cost:", MachineryCost);
    printf("%50s %.2f\n","Building Cost:", BuildingCost);
    printf("%50s %.2f\n","Material Cost:", MaterialCost);
    printf("\n%50s %.2f X\n", "TOTAL PRODUCTIVITY:", TP(ProductOutput, LaborCost+MachineryCost+BuildingCost+MaterialCost));
    printf("%50s %.2f X\n", "VALUE-ADDED PRODUCTIVITY:", VAP(ProductOutput-MaterialCost, LaborCost+MachineryCost+BuildingCost));
}
float TP(float PO, float TF){ // ��Ե�Ҿ���
    return (PO/TF);
}
float VAP(float NPO, float OP){ // ��Ե�Ҿ��Ť������
    return (NPO/OP);
}
