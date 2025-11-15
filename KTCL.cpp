#include <iostream>

using namespace std;

bool KT_CL(int n)
{
    //phương pháp nhây thơ
    // int S = n % 2;
    // if(S==0)
    // {
    //     return true;
    // }else
    // {
    //     return false;
    // }

    
    //Sử dụng toán tử and
    // if((n&1)==0){
    //     return true;
    // }else{
    //     return false;
    // }'

    return n%2==0 ? true : false;
}

int main(){
    int n = 14;

    //phương pháp nhây thơ
    // if(KT_CL(n))
    // {
    //     cout << "true";
    // }else{
    //     cout << "false";
    // }
    
    //Sử dụng toán tử and
    // if (KT_CL(n) == true)
    // {
    //     cout << "true";
    // }else
    // {
    //     cout << "false";
    // }
    // return 0;

    cout << KT_CL(n);    
}