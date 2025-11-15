#include <bits/stdc++.h>
using namespace std;

bool KTsonguyento(int n){
    if(n<=1)
        return false;
    for(int i = 2; i<= sqrt(n); i++)
    {
        if(n%i==0)
            return  false;
    }
    return true;
}

int main(){
    KTsonguyento(15) ? cout << "true" : cout << "false";
    return 0;
}