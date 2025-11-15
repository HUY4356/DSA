#include <bits/stdc++.h>
using namespace std;

int daonguocn(int n){
    int s = 0;
    while (n>0)
    {
        s = s * 10 + n%10;
        n=n/10;
    }
    return s;
}

int main(){
    int n = 123;
    cout << daonguocn(n);
    return 0;
}
