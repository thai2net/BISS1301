// Account BOOK
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;
float strtof (const char* str, char** endptr);
typedef struct {
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
    int row = 21;
    AccountBOOK ac_book2019[row], *p;
    FILE *fp = fopen("balance_sheet.txt", "r+");
    int i =0;
    for(int i = 0; i < row; i++){
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
    fclose(fp);
    char *title_row_cash_balance[] = {"DATE", "REF.", "DESCRIPTON", "DEBIT", "CREDIT", "BALANCE"};
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << setw(60) << "11112/CASH BALANCE" << endl;
    cout << setw(15) << title_row_cash_balance[0];
            cout << setw(15) << title_row_cash_balance[1];
            cout << setw(40) << title_row_cash_balance[2];
            cout << setw(15) << title_row_cash_balance[3];
            cout << setw(15) << title_row_cash_balance[4];
            cout << setw(15) << title_row_cash_balance[5];
            cout << endl;
    char* endptr;
    float balance = strtof(ac_book2019[0].debit, &endptr);
    for(int i = 0; i < row; i++){
        string ac = ac_book2019[i].ac_id;
        if(ac == "11112"){
            cout << setw(15) << ac_book2019[i].date;
            cout << setw(15) << ac_book2019[i].ref_no;
            cout << setw(40) << ac_book2019[i].des;
            cout << setw(15) << ac_book2019[i].debit;
            cout << setw(15) << ac_book2019[i].credit;
            cout << setw(15) << balance;
            cout << endl;
            balance = balance + (ac_book2019[i].debit - ac_book2019[i].credit);
        }
    }cout << endl;
    return 0;
}
