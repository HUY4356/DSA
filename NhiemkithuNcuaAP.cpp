#include <bits/stdc++.h>
using namespace std;

//Phương pháp cơ bản
// int NhiemkithuNcuaAP(int a1, int a2, int n){
//     int NhiemkithuN = a1;
//     int d = a2 - a1;

//     for(int i = 1; i < n; i++)
//     {
//         NhiemkithuN += d;
//     }

//     return NhiemkithuN;
// }
// int main(){
//     int a1 = 2, a2 = 3;
//     int n = 4;
//     cout << NhiemkithuNcuaAP(a1, a2, n);
//     return 0;
// }

int NhiemkithuNcuaAP(int a1, int a2, int n){
    return (a1 + (n - 1) * (a2 - a1));
}
int main(){
    int a1 = 2, a2 = 3;
    int n = 4;
    cout << NhiemkithuNcuaAP(a1, a2, n);
    return 0;
}