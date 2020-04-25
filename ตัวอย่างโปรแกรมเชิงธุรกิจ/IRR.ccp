// Internal Rate of Return  -- IRR.cpp
#include <stdio.h>
#include <math.h>
#define LOW_RATE 0.01 // ตั้งค่า low rate สำหรับวนรอบคำนวณค่าค่า IRR
#define HIGH_RATE 0.5 // ตั้งค่า high rate สำหรับวนรอบคำนวณค่าค่า IRR
#define MAX_ITERATION 1000 // ตั้งค่าการวนรอบประมาณการณ์ IRR สูงสุด
#define PRECISION_REQ 0.00000001 // ตั้งค่า Precision
double getIRR(double NetCashFlow[], int nFlow);
int main() {
     double NetCashFlow[] = {-1000000.0000, 31999.9922, 31999.9922,
                31999.9922, 31999.9922, 31999.9922, 2000000.0000}; // ข้อมูล NCF
     double IRR = 0.00; // ตัวแปรเก็บค่า IRR
     int nFlow = 7; // จำนวนข้อมูลใน NCF
     IRR = getIRR(NetCashFlow, nFlow); // หา IRR
     printf("\n%50s %.4f percent\n","IRR:", IRR*100);
}
double getIRR(double NetCashFlow[], int nFlow) { // ฟังก์ชันหา IRR
     int i = 0, j = 0;
     double m = 0.00;
     double old = 0.00;
     double n = 0.00;
     double oldguessRate = LOW_RATE;
     double newguessRate = LOW_RATE;
     double guessRate = LOW_RATE;
     double lowGuessRate = LOW_RATE;
     double highGuessRate = HIGH_RATE;
     double NPV = 0.00;
     double denom = 0.00;
     for(i=0; i<MAX_ITERATION; i++) { // 1,000 รอบคำนวณ-ตรวจสอบ
        NPV = 0.00;
        for(j=0; j<nFlow; j++) { // 7 รอบใน NCF
           denom = pow((1 + guessRate),j);
           NPV = NPV + (NetCashFlow[j]/denom);
        }
          if((NPV > 0) && (NPV < PRECISION_REQ)) // NPV เข้าใกล้ 0 จนยอมรับได้
            break; // ให้จบการคำนวณหา IRR
            if(old == 0)
                old = NPV;
            else
                old = n;
            n = NPV;
          if(i > 0) {
               if(old < n) {
                    if(old < 0 && n < 0)
                        highGuessRate = newguessRate;
                    else
                        lowGuessRate = newguessRate;

               }else {
                    if(old > 0 && n > 0)
                        lowGuessRate = newguessRate;
                    else
                        highGuessRate = newguessRate;
               }
          }
          oldguessRate = guessRate;
          guessRate = (lowGuessRate + highGuessRate) / 2;
          newguessRate = guessRate;
     }
     return guessRate;
}
