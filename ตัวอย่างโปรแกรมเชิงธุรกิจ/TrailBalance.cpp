// Trail Balance Sheet -- TrailBalance.cpp
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
    int row = 27;
    AccountBOOK ac_book2019[row], *p; // ประกาศตัวแปรโครงสร้างและพอนย์เตอร์
    FILE *fp = fopen("balance_sheet.txt", "r+"); // เปิดไฟล์
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
    fclose(fp); // ปิดไฟล์
    char *title_trail[] = {"ASSETS", "LIABILITIES", "EQUITY", "INCOME", "EXPENSES"};
    char *title_row_trail[] = {"ACT_ID", "ACT_NAME", "CREDIT", "CREDIT"};
    string list_asset[] ={"111111","11112","11122.01","11311","12611","12612","13111"};
    string name_asset[] ={"CashOnHand","CashBalance","KrungThaiBank,AccountNo.9809999999","AccountsReceivable(General)","OfficeSupplies","Decoration","Building"};
    string list_liabilities[] = {"21311","21399"};
    string name_liabilities[] = {"AccountsPayable(General)","SalesTax"};
    string list_equity[] = {"31110","34200"};
    string name_equity[] = {"RegisteredCapital(OrdinaryShares)","RetainedEarnings(Unappropriated)"};
    string list_income[] = {"41010","41020"};
    string name_income[] = {"ProductIncome","ServiceIncome"};
    string list_expenses[] = {"51111","53031.01","53031.02","53031.04","52040"};
    string name_expenses[] = {"ProductFee","ElectricFee","WaterFee","InternetFee","EntertainmentFee"};
    double asset_balance[7],liabilities_balance[2],equity_balance[2],income_balance[2],expenses_balance[5];
    double trail_balance[]={0.00,0.00,0.00,0.00,0.00}; // เก็บผลรวมแต่ละหมวด
    char* endptr;
    bool  asset_chk[7];
    for(int m = 0; m < 7; m++){
      asset_chk[m] = 0;
      for(int i = 0; i < row; i++){
         if(ac_book2019[i].ac_id == list_asset[m]){
            if(asset_chk[m] == 0){
                asset_balance[m] = strtof(ac_book2019[i].debit, &endptr);
                asset_chk[m] = 1;
            }else{
                asset_balance[m] = asset_balance[m]+(strtof(ac_book2019[i].debit, &endptr)-strtof(ac_book2019[i].credit, &endptr));
            }
         }
      }trail_balance[0]=trail_balance[0]+asset_balance[m];
    }
    bool  liabilities_chk[2];
    for(int m = 0; m < 2; m++){
      liabilities_chk[m] = 0;
      for(int i = 0; i < row; i++){
         if(ac_book2019[i].ac_id == list_liabilities[m]){
            if(liabilities_chk[m] == 0){
                liabilities_balance[m] = strtof(ac_book2019[i].credit, &endptr);
                liabilities_chk[m] = 1;
            }else{
                liabilities_balance[m] = liabilities_balance[m]+(strtof(ac_book2019[i].credit, &endptr)-strtof(ac_book2019[i].debit, &endptr));
            }
         }
      }trail_balance[1]=trail_balance[1]+liabilities_balance[m];
    }
    bool  equity_chk[2];
    for(int m = 0; m < 2; m++){
      equity_chk[m] = 0;
      for(int i = 0; i < row; i++){
         if(ac_book2019[i].ac_id == list_equity[m]){
            if(equity_chk[m] == 0){
                equity_balance[m] = strtof(ac_book2019[i].credit, &endptr);
                equity_chk[m] = 1;
            }else{
                equity_balance[m] = equity_balance[m]+(strtof(ac_book2019[i].credit, &endptr)-strtof(ac_book2019[i].debit, &endptr));
            }
         }
      }trail_balance[2]=trail_balance[2]+equity_balance[m];
    }
    bool  income_chk[2];
    for(int m = 0; m < 2; m++){
      income_chk[m] = 0;
      for(int i = 0; i < row; i++){
         if(ac_book2019[i].ac_id == list_income[m]){
            if(income_chk[m] == 0){
                income_balance[m] = strtof(ac_book2019[i].credit, &endptr);
                income_chk[m] = 1;
            }else{
                income_balance[m] = income_balance[m]+(strtof(ac_book2019[i].credit, &endptr)-strtof(ac_book2019[i].debit, &endptr));
            }
         }
      }trail_balance[3]=trail_balance[3]+income_balance[m];
    }
    bool  expenses_chk[5];
    for(int m = 0; m < 5; m++){
      expenses_chk[m] = 0;
      for(int i = 0; i < row; i++){
         if(ac_book2019[i].ac_id == list_expenses[m]){
            if(expenses_chk[m] == 0){
                expenses_balance[m] = strtof(ac_book2019[i].debit, &endptr);
                expenses_chk[m] = 1;
            }else{
                expenses_balance[m] = expenses_balance[m]+(strtof(ac_book2019[i].debit, &endptr)-strtof(ac_book2019[i].credit, &endptr));
            }
         }
      }trail_balance[4]=trail_balance[4]+expenses_balance[m];
    }
    cout.setf(ios::fixed, ios::floatfield); cout.precision(2);
    cout << setw(60) << "TRIAL BALANCE" << endl;
    cout << setw(30) << title_row_trail[0]
         << setw(40) << title_row_trail[1]
         << setw(20) << title_row_trail[2]
         << setw(20) << title_row_trail[3]
         << endl;
    cout << setw(15) << title_trail[0] << endl;
    for(int i = 0; i < 115; i++){cout << '-';}cout << endl;
    for(int m = 0; m < 7; m++){
    cout << setw(30) << list_asset[m]
         << setw(40) << name_asset[m]
         << setw(20) << asset_balance[m]
         << setw(20) << '-'
         << endl;
    }
    cout << setw(15) << title_trail[1] << endl;
    for(int i = 0; i < 115; i++){cout << '-';}cout << endl;
    for(int m = 0; m < 2; m++){
    cout << setw(30) << list_liabilities[m]
         << setw(40) << name_liabilities[m]
         << setw(20) << '-'
         << setw(20) << liabilities_balance[m]
         << endl;
    }
    cout << setw(15) << title_trail[2] << endl;
    for(int i = 0; i < 115; i++){cout << '-';}cout << endl;
    for(int m = 0; m < 2; m++){
    cout << setw(30) << list_equity[m]
         << setw(40) << name_equity[m]
         << setw(20) << '-'
         << setw(20) << equity_balance[m]
         << endl;
    }
    cout << setw(15) << title_trail[3] << endl;
    for(int i = 0; i < 115; i++){cout << '-';}cout << endl;
    for(int m = 0; m < 2; m++){
    cout << setw(30) << list_income[m]
         << setw(40) << name_income[m]
         << setw(20) << '-'
         << setw(20) << income_balance[m]
         << endl;
    }
    cout << setw(15) << title_trail[4] << endl;
    for(int i = 0; i < 115; i++){cout << '-';}cout << endl;
    for(int m = 0; m < 5; m++){
    cout << setw(30) << list_expenses[m]
         << setw(40) << name_expenses[m]
         << setw(20) << expenses_balance[m]
         << setw(20) << '-'
         << endl;
    }
    for(int i = 0; i < 115; i++){cout << '-';}cout << endl;
    float debit = trail_balance[0]+trail_balance[4];
    float credit = trail_balance[1]+trail_balance[2]+trail_balance[3];
    cout << setw(90) << debit << setw(20) << credit << endl;;
    return 0;
}
