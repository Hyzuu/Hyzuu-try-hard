#include<stdio.h>
int main() {
    int N;
    printf("Nhap vao N: ");
    scanf("%d", &N);
    int sum = 0;
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }
    if (sum == N) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}