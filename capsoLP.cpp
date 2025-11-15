#include <bits/stdc++.h>
using namespace std;

int capsoLP(int n){
    int count = 0;

    for(int i = 1; i<=n; i++){
        for(int j = 0; j <=n; j++){
            if(i * i * i + j * j * j == n)
                count++;
        }
    }
    return count;
}

int main(){
    cout << capsoLP(9);
    return 0;
}