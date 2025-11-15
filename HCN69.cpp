#include <bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
};

int HCN69(Point l1, Point r1, Point l2, Point r2){

    if(l1.x>r2.x || l2.x>r1.x)
        return false;
    
    if(r1.y>l2.y || r2.y>l1.y)
        return false;

    return true;
}

int main(){
    Point l1 = { 0, 10 }, r1 = { 10, 0 };
    Point l2 = { 5, 5 }, r2 = { 15, 0 };

    if(HCN69(l1,r1,l2,r2)){
        cout << "hình chữ nhật chồng lên nhau";
    }else{
        cout << "hình chữ nhật không chồng lên nhau";
    }
    return 0;
}