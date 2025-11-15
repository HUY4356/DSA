#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b){
//     int S = min(a,b);
//     while(S > 0){
//         if( a % S == 0 && b % S == 0){
//             break;
//         }
//         S--;
//     }
//     return S;
// }
// int main(){
//     int a = 20;
//     int b = 28;
//     cout << gcd(a,b);
//     return 0;
// }

//  Thuật toán Euclid đã sửa đổi bằng cách sử dụng Phép trừ bằng cách kiểm tra khả năng chia hết - O (min (a, b)) Thời gian và O (min (a, b)) Space
int gcd(int a, int b){

    //kiểm tra chia cho 0
    if(a==0)
        return b;
    if(b==0)
        return a;
    
    //tạo vỏ cơ sở
    if(a==b)
        return a;

    //nếu a lớn hơn
    if(a>b){
        if(a % b == 0)
            return b;
        return gcd(a-b, b);
    }
    
    //nếu b lớn hơn
    if(b%a==0)
        return a;
    return gcd(a,b-a);
}
int main(){
    int a = 20;
    int b = 28;
    cout << gcd(a,b);
    return 0;
}

//phương thức kết hợp
// int gcd(int a, int b){
//     return __gcd(a,b);
// }
// int main(){
//     int a = 20;
//     int b = 28;
//     cout << gcd(a,b);
//     return 0;
// }