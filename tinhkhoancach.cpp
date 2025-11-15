#include <bits/stdc++.h>
using namespace std;

float tinhkhoancach(int x1, int y1, int x2, int y2){
    int dx = x2 - x1;
    int dy = y2 - y1;
    return round(sqrt(dx*dx + dy*dy)); // làm tròn một số

    // return sqrt(dx*dx + dy*dy) * 1.0; //số thập phân

    // return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) * 1.0); //cách 2 //vẵn là in ra thập phân
}

int main(){
    cout << tinhkhoancach(3,4,4,3);
    return 0;
}