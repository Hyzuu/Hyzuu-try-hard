#include<stdio.h>
int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);
    int thu = 0;
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            thu++;
        }
    }
    int count = 0;
    if (thu == 1) {
        printf("%d ", N);
        for (int i = N + 1; i < 1000; i++) {
            int thu2 = 0;
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    thu2++;
                }    
            }
            if (thu2 == 1) {
                printf("%d ", i);
                count++;
            }
            if (count == 3) {
                break;
            }
            thu2 = 0;
        }
    }
    else {
        printf("No");
    }
}