#include<stdio.h>
int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);
    int i = 2;
    int n = 1;
    while (i <= N) {
        if (i % 2 == 0) {
            n += i;
        }  
        else if (i % 2 != 0) {
            n -= i;
        }
        i++;
    }
    printf("%d", n);
    return 0;
}