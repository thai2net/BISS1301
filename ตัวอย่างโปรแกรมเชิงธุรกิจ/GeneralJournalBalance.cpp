// GENERAL JOURNAL BALANCE SHEET -- GeneralJournalBalance.cpp
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
float strtof (const char* str, char** endptr);
typedef struct { // ประกาศโครงสร้างข้อมูล
    char date[50];
    char ref_no[50];
    char ac_id[50];
    char ac_name[50];
    char debit[50];
    char credit[50];
    char des[50];
    char book[50];
} AccountBOOK;
int main(){
    int row = 26;
    AccountBOOK ac_book2019[row], *p; // ประกาศตัวแปรโครงสร้างและพอนย์เตอร์
    FILE *fp = fopen("balance_sheet.txt", "r+"); // เปิดไฟล์
    int i = 0;
    for(int i = 0; i < row; i++){ // วนรอบอ่านข้อมูลจากไฟล์
        fscanf(fp, "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",
           ac_book2019[i].date,
           ac_book2019[i].ref_no,
           ac_book2019[i].ac_id,
           ac_book2019[i].ac_name,
           ac_book2019[i].debit,
           ac_book2019[i].credit,
           ac_book2019[i].des,
           ac_book2019[i].book
        );
    }
    fclose(fp); // ปิดไฟล์
    char *title_row_book[] = {"DATE", "ACT_ID", "ACT_NAME", "DEBIT", "CREDIT", "DESCRIPTON"};
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(60) << "GENERAL JOURNAL BALANCE SHEET" << endl;
    for(int i = 0; i < 120; i++){cout << '-';}cout << endl;
    cout << setw(15) << title_row_book[0]; // แถวหัวข้อ
            cout << setw(15) << title_row_book[1];
            cout << setw(40) << title_row_book[2];
            cout << setw(15) << title_row_book[3];
            cout << setw(15) << title_row_book[4];
            cout << setw(15) << title_row_book[5];
            cout << endl;
    char* endptr;
    float debit = 0.00, credit = 0.00;
    for(int i = 0; i < row; i++){ // แถวรายการสมุดรายวันขั้นต้น
        string ac = ac_book2019[i].ac_id;
        debit += strtof(ac_book2019[i].debit, &endptr); // คำนวณเดบิต
        credit += strtof(ac_book2019[i].credit, &endptr); // คำนวณเครดิต
            cout << setw(15) << ac_book2019[i].date;
            cout << setw(15) << ac_book2019[i].ac_id;
            cout << setw(40) << ac_book2019[i].ac_name;
            cout << setw(15) << ac_book2019[i].debit;
            cout << setw(15) << ac_book2019[i].credit;
            cout << setw(15) << ac_book2019[i].des;
            cout << endl;
    }
     for(int i = 0; i < 120; i++){cout << '-';}cout << endl;
            cout << setw(85) << debit;
            cout << setw(15) << credit;
            cout << endl;
    return 0;
}
