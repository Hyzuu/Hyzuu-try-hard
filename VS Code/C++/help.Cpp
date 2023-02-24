#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int d= a / b;
    int  r = a % b;
    cout << a << " chia het cho " << b  << " co thuong la " <<  d <<  " co so du la " << r;
    return 0;
}