#include <iostream>
using namespace std;

// Tổng các chữ số của một số

// trích xuất chữ số
// int TongN(int n){
//     int S = 0;
//     while (n != 0)
//     {
//         int last = n % 10;
//         S += last;
//         n /= 10;
//     }
//     return S;
// }
// int main()
// {
//     int n = 12345;
//     cout << TongN(n);
//     return 0;
// }

// Sử dụng đệ quy
int TongN(int n){
    if(n == 0)
        return 0;
    
    return (n % 10) + TongN(n / 10);
}
int main(){
    cout << TongN(12345);
    return 0;
}