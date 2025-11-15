#include <iostream>
using namespace std;

// int TongBP(int n)
// {
//     int s = 0;
//     for(int i = 1; i <= n; i++){
//         s = s + i*i;
//     }
//     return s;
// }
// int main(){
//     int n = 2;
//     cout << TongBP(n);
//     return 0;
// }

// phương pháp theo công thức
int TongBP(int n){
    return (n * (n+1) /2) * (2 * n + 1 ) / 3;
}
int main(){
    int n = 2;
    cout << TongBP(n);
    return 0;
}