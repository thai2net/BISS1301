#include <stdio.h> // โปรแกรมที่ 7.3 แสดงวิธีการใช้งานอาเรย์ 2 มิติ 
main() {
    int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("x[%d][%d] = %d\n", i, j, x[i][j]);
        }
    }
}