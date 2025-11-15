#include <bits/stdc++.h>
using namespace std;

// int giaithuacuaN(int n){
//     int s = 1;
//     for(int i = 2; i<=n; i++){
//         s = s*i;
//     }
//     return s;
// }
// int main(){
//     cout << giaithuacuaN(5);
//     return 0;
// }

//phương pháp đệ quy
int giaithuacuaN(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * giaithuacuaN(n - 1);
}
int main(){
    cout << giaithuacuaN(5);
    return 0;
}