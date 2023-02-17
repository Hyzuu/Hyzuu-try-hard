#include<stdio.h>
int main() {
    int N, arr[100];
    printf("Nhap N: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int M, K;
    printf("Nhap vi tri muon xoa K: ");
    scanf("%d", &K);
    printf("Nhap so phan tu muon xoa M: ");
    scanf("%d", &M);
    while (M > 0) {
        for (int i = K; i < N; i++) {
            int t = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = t;
        }
        N--;
        M--;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

}

