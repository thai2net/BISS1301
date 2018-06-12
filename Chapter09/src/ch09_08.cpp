#include <stdio.h> // โปรแกรมที่ 9.8 แสดงวิธีประมาณการประเมินอัตราผลตอบแทนการลงทุน
#include <math.h>
#define LOW_RATE 0.01
#define HIGH_RATE 0.5
#define MAX_ITERATION 1000
#define PRECISION_REQ 0.00000001
double getIRR(double NetCashFlow[], int nFlow);
int main() {
     double NetCashFlow[] = {-1000000.0000, 31999.9922, 31999.9922, 
                31999.9922, 31999.9922, 31999.9922, 2000000.0000};
    double IRR = 0.00;
     int nFlow = 7;
     IRR = getIRR(NetCashFlow, nFlow);
     printf("IRR: %.4f percent", IRR*100);
}
double getIRR(double NetCashFlow[], int nFlow) {
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
     for(i=0; i<MAX_ITERATION; i++) {
        NPV = 0.00;
        for(j=0; j<nFlow; j++) {
           denom = pow((1 + guessRate),j);
           NPV = NPV + (NetCashFlow[j]/denom);
        } 
          if((NPV > 0) && (NPV < PRECISION_REQ))
            break;
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