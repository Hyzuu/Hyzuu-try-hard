#include<stdio.h>

void nhap(int &n, int arr[][100]) {
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void sapxep(int n, int k,int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = n; j > k; j--) {
            int text = arr[i][j - 1];
            arr[i][j - 1] = arr[i][j];
            arr[i][j] = text;
        }
        arr[i][k] = 0;
    }
}

void xuat(int n, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, k, arr[100][100];
    nhap(n, arr);
    printf("Nhap vi tri chen: ");
    scanf("%d", &k);
    sapxep(n, k, arr);
    xuat(n, arr);
}