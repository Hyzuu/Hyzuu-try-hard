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

void sapxep(int n, int arr[][100]) {
    for (int i)
}

void xuat(int n, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, arr[100][100];
    nhap(n, arr);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

        }
    }
    xuat(n, arr);
}