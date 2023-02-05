#include<stdio.h>
void main() {
    int N;
    int a = 0;
    printf("Nhap vao N: ");
    scanf("%d", &N);
    while (N >= 1) {
        int b = N % 10;
        a = a * 10 + b;
        N /= 10;
    }
    printf("Ket qua la: %d", a);
}