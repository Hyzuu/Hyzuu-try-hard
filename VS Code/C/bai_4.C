#include<stdio.h>
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int count;
    while (n != 0) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n -= 1;
        }
        count++;
    }
    printf("%d", count);
}