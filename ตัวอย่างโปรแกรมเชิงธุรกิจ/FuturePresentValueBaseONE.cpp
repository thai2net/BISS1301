// Future and Present Value (Based 1 BAHT) -- FuturePresentValueBaseONE.cpp
#include <iostream>
#include <iomanip>
float FV (float PV, float rate, int t);
float PV (float FV, float rate, int t);
float POW(float x, int t);
main() {
    using namespace std;
    char *title_rate[] = {"1%", "3%", "5%"};
    int n = 10; // จำนวนปี
    float base = 1; // ฐาน 1 บาท
    cout.setf(ios::fixed, ios::floatfield); cout.precision(4);
    cout << setw(40) << "FUTURE VALUE (1 BAHT)" << endl;
    cout << setw(10) << "YEAR";
    for(int i = 0; i < 3; i++){
        cout << setw(10) << title_rate[i];
    }cout << endl;
    for(int i = 1; i <= n; i++){
    cout << setw(10) << i
         << setw(10) << FV (base, 1.00, i)
         << setw(10) << FV (base, 3.00, i)
         << setw(10) << FV (base, 5.00, i) << endl;
    }cout << endl;
    cout << setw(40) << "PRESENT VALUE (1 BAHT)" << endl;
    cout << setw(10) << "YEAR";
    for(int i = 0; i < 3; i++){
        cout << setw(10) << title_rate[i];
    }cout << endl;
    for(int i = 1; i <= n; i++){
    cout << setw(10) << i
         << setw(10) << PV (base, 1.00, i)
         << setw(10) << PV (base, 3.00, i)
         << setw(10) << PV (base, 5.00, i) << endl;
    }cout << endl;
}
float FV (float PV, float rate, int t) { // มูลค่าอนาคต
    return PV*POW(1+rate/100,t);
}
float PV (float FV, float rate, int t) { // มูลค่าปัจจุบัน
    return FV/POW(1+rate/100, t);
}
float POW(float x, int t){ // หายกกำลัง
    float pow = 1.00;
    for(int i = 1; i <= t; i++){
       pow = pow * x;
    }
    return pow;
}

