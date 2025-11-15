#include <iostream>
using namespace std;

// Kiểm tra từ n-m tới n+m 
// int SoGannhat(int n, int m){
//     int closest = 0;
//     int minDifference = INT_MAX;

//     for(int i = n - abs(m); i <= n + abs(m); ++i){
//         if(i % m == 0){
//             int difference = abs(n-i);

//             if(difference < minDifference || (difference == minDifference && abs(i)> abs(closest)))
//             {
//                 closest = i;
//                 minDifference = difference;
//             }
//         }
//     }
//     return closest;
// }
// int main(){
//     int n,m;
//     n = 13, m = 4;
//     cout << SoGannhat(n,m) << endl;
//     return 0;
// }

// Tiếp cận bằng cách tìm thương
int SoGanNhat(int n, int m){
    
    int q = n / m;

    int n1 = m * q;

    int n2 = (n * m) > 0 ? (m * ( q + 1 )) : (m * (q - 1));

    if(abs(n-n1) < abs(n - n2))
        return n1;

    return n2;
}
int main(){
    int n,m;
    n = 13, m = 4;
    cout << SoGanNhat(n,m) << endl;
    return 0;
}