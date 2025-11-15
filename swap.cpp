#include <iostream>
using namespace std;

// sử dụng biến thứ 3
int main(){
    int a,b,c;
    a = 2;
    b = 3;

    cout << a << b <<endl;

    c = a;
    a = b;
    b = c;

    cout << a << b <<endl;

    return 0;
}

// hoán đổi tích hợp
// int main(){
//     int a,b;
//     a = 2;
//     b = 3;
//     cout << a << b << endl;
//     swap(a,b);
//     cout << a << b;

//     return 0;
// }