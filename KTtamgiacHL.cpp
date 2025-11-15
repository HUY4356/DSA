#include <bits/stdc++.h>
using namespace std;

bool KTtamgiacHL(int a, int b, int c){
    //toán tử and
    // if(a+b > c && a+c > b && b+c > a)
    //     return true;
    // return false;

    //toán tử or
    if(a+b <= c || a+c <= b || b+c <= a)
        return false;
    return true;
}

int main(){
    cout << KTtamgiacHL(7,10,5);
    return 0;
}