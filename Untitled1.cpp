#include <iostream>
using namespace std;

int main() {
    int sum = 0;
	int getsum = 0;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
        sum += i;
    }
	for(int j = 10;j<=20;j++){
        	cout << j << " ";
		}
    getsum+= sum;
    cout << "\nTong = " << sum << endl;
	cout << "\nGettong: " << getsum << endl;
    return 0;
}

