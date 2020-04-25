// GENERAL JOURNAL BALANCE SHEET -- GeneralJournalBalance.cpp
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
float strtof (const char* str, char** endptr);
typedef struct { // ��С���ç���ҧ������
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
    AccountBOOK ac_book2019[row], *p; // ��С�ȵ�����ç���ҧ��о͹������
    FILE *fp = fopen("balance_sheet.txt", "r+"); // �Դ���
    int i = 0;
    for(int i = 0; i < row; i++){ // ǹ�ͺ��ҹ�����Ũҡ���
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
    fclose(fp); // �Դ���
    char *title_row_book[] = {"DATE", "ACT_ID", "ACT_NAME", "DEBIT", "CREDIT", "DESCRIPTON"};
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(60) << "GENERAL JOURNAL BALANCE SHEET" << endl;
    for(int i = 0; i < 120; i++){cout << '-';}cout << endl;
    cout << setw(15) << title_row_book[0]; // ����Ǣ��
            cout << setw(15) << title_row_book[1];
            cout << setw(40) << title_row_book[2];
            cout << setw(15) << title_row_book[3];
            cout << setw(15) << title_row_book[4];
            cout << setw(15) << title_row_book[5];
            cout << endl;
    char* endptr;
    float debit = 0.00, credit = 0.00;
    for(int i = 0; i < row; i++){ // ����¡����ش����ѹ��鹵�
        string ac = ac_book2019[i].ac_id;
        debit += strtof(ac_book2019[i].debit, &endptr); // �ӹǳഺԵ
        credit += strtof(ac_book2019[i].credit, &endptr); // �ӹǳ�ôԵ
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
