#include <stdio.h>	// โปรแกรมที่ 7.2 แสดงวิธีการใช้งานอาเรย์ 1 มิติ 	
main() {
    char name[] = "Natasha Romanoff";		// ประกาศอาเรย์อักขระ
    int score[5] = {8, 7, 6, 8, 10};		// ประกาศอาเรย์ตัวเลข	
    for(int i = 0;i < sizeof(name); i++){
        printf("name[%d]=%c\n", i+1, name[i]);
    }
    for(int i = 0;i < 5; i++){
        printf("score[%d]=%d\n", i+1, score[i]);
    }
}	