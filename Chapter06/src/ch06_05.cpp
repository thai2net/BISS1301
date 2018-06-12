#include <stdio.h>	// โปรแกรมที่ 6.5 แสดงการใช้งานโครงสร้างคำสั่งทางเลือก if()...else if()...else
main() {	
         int score = 80;	
         if(score >= 80) {	// เมื่อ score >= 80
                  printf("your score: %d is grade A", score);	  // ทางเลือก 1
         else if(score >= 70) {	// เมื่อ score >= 70
                  printf("your score: %d is grade B", score);	  // ทางเลือก 2
         } else if(score >= 60) {	// เมื่อ score >= 60
                  printf("your score: %d is grade C", score);	  // ทางเลือก 3
         } else if(score >= 50) {	// เมื่อ score >= 50
                 printf("your score: %d is grade D", score);	  // ทางเลือก 4
         } else {	
                 printf("your score: %d is grade F", score);	  // ทางเลือก 5
         }	
}	