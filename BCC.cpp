#include <iostream>

using namespace std;

// void BCC(int n){
//     for(int i = 1;i<=10;i++){
//         cout << n << " * " << i << " = " << n*i << endl;
//     }
// }
// int main(){
//     int n=5;
//     BCC(n);
//     return 0;
// }

//phương pháp đệ quy
void BCC(int n, int i = 1){

    if(i==11)
        return;
    cout << n << " * " << i << " = " << n*i << endl;
    i++;
    BCC(n,i);
}

int main(){
    int n = 5;
    BCC(n);
    return 0;
}