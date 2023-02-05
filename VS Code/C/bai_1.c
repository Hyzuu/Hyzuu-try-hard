#include<stdio.h>
void main() {
    float a, b, c;
    printf("Nhap vao ba canh tam giac: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Do la mot tam giac");
    }
    else {
        printf("Day ko phai la ba canh cua mot tam giac");
    }
}