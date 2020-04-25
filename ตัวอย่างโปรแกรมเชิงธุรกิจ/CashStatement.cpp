// 11112/CASH STATEMENT -- CashStatement.cpp
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
    FILE *fp = fopen("balance_sheet.txt", "r+");// เปิดไฟล์
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
    char *title_row_cash_balance[] = {"DATE", "REF.", "DESCRIPTON", "DEBIT", "CREDIT", "BALANCE"};
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(60) << "11112/CASH BALANCE STATEMENT" << endl;
    for(int i = 0; i < 120; i++){cout << '-';}cout << endl;
    cout << setw(15) << title_row_cash_balance[0];
            cout << setw(15) << title_row_cash_balance[1];
            cout << setw(40) << title_row_cash_balance[2];
            cout << setw(15) << title_row_cash_balance[3];
            cout << setw(15) << title_row_cash_balance[4];
            cout << setw(15) << title_row_cash_balance[5];
            cout << endl;
    char* endptr;
    float balance;
    bool chk = 0;
    for(int i = 0; i < row; i++){ // แถวรายการสมุดรายวันขั้นต้น
        string ac = ac_book2019[i].ac_id;
        if(ac == "11112"){ // เลือกเฉพาะบัญชี
            if(chk == 0){ // คำนวณสถานะบัญชี
                balance = strtof(ac_book2019[i].debit, &endptr); // เริ่มต้นบัญชี
                chk = 1;
            }else{
                balance = balance+(strtof(ac_book2019[i].debit, &endptr)-strtof(ac_book2019[i].credit, &endptr));
            }
            cout << setw(15) << ac_book2019[i].date;
            cout << setw(15) << ac_book2019[i].ref_no;
            cout << setw(40) << ac_book2019[i].des;
            cout << setw(15) << ac_book2019[i].debit;
            cout << setw(15) << ac_book2019[i].credit;
            cout << setw(15) << balance;
            cout << endl;
        }
    }for(int i = 0; i < 120; i++){cout << '-';}cout << endl;
    return 0;
}
