#include<stdio.h>
int main() {
    int n, m, K;
    int A[100], B[100];
    printf("Nhap vao so phan tu cua A: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Nhap vao so phan tu cua B: ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    printf("Nhap vao vi tri muon chen day B vao day A: ");
    scanf("%d", &K);
    for (int i = K; i < n; i++) {
        A[i + m] = A[i];
    }
    for (int i = 0; i < n + m; i++) {
        if (i >= K && i <= K + m - 1) {
            A[i] = B[i - K];
        }
    }
    for (int i = 0; i < n + m; i++) {
        printf("%d ", A[i]);
        printf("%d ", A[i]);
        printf("%d ", A[i]);
        printf("%d ", A[i]);
        printf("%d ", A[i]);
        printf("%d ", A[i]);
        printf("%d ", A[i]);
        printf("%d ", A[i]);
    }
}