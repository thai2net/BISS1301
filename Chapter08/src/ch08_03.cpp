include <iostream> // โปรแกรมที่ 8.3 แสดงวิธีการใช้พอยน์เตอร์กับอาเรย์
using namespace std;
main() {
    int x[10] = {0,1,2,3,4,5,6,7,8,9}, *p;
    p = &x[0];
	for(int i=0; i < sizeof(x)/sizeof(*p); i++) { // วนจำนวน 10 รอบ
		cout << "Array[" << i << "]: " << *p++ << endl;
	} 
}