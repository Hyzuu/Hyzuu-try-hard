#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) 
        if (n % i == 0) {
            return false;
        }
        else {
            return true;
        }
}

int greatestCommonPrimeDivisor(int a, int b) {
    int k = 2; 
    int divide = 0;
    while (k <= (a / 2)) {
        if (a % k == 0) {
            if (b % k == 0) {
                if (isPrime(k)) {
                    divide = k;
                }
            }
        }
        k++;
    }
    return divide;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << greatestCommonPrimeDivisor(a, b);
}