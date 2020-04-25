// Internal Rate of Return  -- IRR.cpp
#include <stdio.h>
#include <math.h>
#define LOW_RATE 0.01 // ��駤�� low rate ����Ѻǹ�ͺ�ӹǳ��Ҥ�� IRR
#define HIGH_RATE 0.5 // ��駤�� high rate ����Ѻǹ�ͺ�ӹǳ��Ҥ�� IRR
#define MAX_ITERATION 1000 // ��駤�ҡ��ǹ�ͺ����ҳ��ó� IRR �٧�ش
#define PRECISION_REQ 0.00000001 // ��駤�� Precision
double getIRR(double NetCashFlow[], int nFlow);
int main() {
     double NetCashFlow[] = {-1000000.0000, 31999.9922, 31999.9922,
                31999.9922, 31999.9922, 31999.9922, 2000000.0000}; // ������ NCF
     double IRR = 0.00; // ������纤�� IRR
     int nFlow = 7; // �ӹǹ������� NCF
     IRR = getIRR(NetCashFlow, nFlow); // �� IRR
     printf("\n%50s %.4f percent\n","IRR:", IRR*100);
}
double getIRR(double NetCashFlow[], int nFlow) { // �ѧ��ѹ�� IRR
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
     for(i=0; i<MAX_ITERATION; i++) { // 1,000 �ͺ�ӹǳ-��Ǩ�ͺ
        NPV = 0.00;
        for(j=0; j<nFlow; j++) { // 7 �ͺ� NCF
           denom = pow((1 + guessRate),j);
           NPV = NPV + (NetCashFlow[j]/denom);
        }
          if((NPV > 0) && (NPV < PRECISION_REQ)) // NPV ������ 0 ������Ѻ��
            break; // ��騺��äӹǳ�� IRR
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
