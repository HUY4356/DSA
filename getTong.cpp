#include <iostream>

using namespace std;

// int getTong(int n){
//     int sum = 0;
//     for(int i = 1;i<=n;i++)
//     {
//         sum += i;
//     }
//     return sum;
// }
// int main(){
//     int n = 5;
//     cout << getTong(n);
//     return 0;
// }

//Phương Pháp đệ quy
// int getTong(int n){

//     if(n == 1)
//         return 1;
//     return n + getTong(n - 1);
// }
// int main(){
//     int n = 5;
//     cout << getTong(n);
//      return 0;
// }

//Phương pháp dựa theo công thức
int getTong(int n){

    return n * (n + 1) / 2;
}
int main(){
    int n = 5;
    cout << getTong(n);
     return 0;
}