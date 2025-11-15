#include <bits/stdc++.h>
using namespace std;

bool kiemtraluythua(int X, int Y){
    if(X==1)
        return (Y==1);

    long int pow = 1;
    while (pow<Y)
    {
        pow*=X;
    }

    return (pow == Y);
}

int main(){
    cout << boolalpha;  
    cout << kiemtraluythua(10,1) <<endl;
    return 0;
}