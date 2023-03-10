#include<stdio.h>

void nhap(int n, int m, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
void xuat (int n, int m, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n, m, arr[100][100];
    printf("Nhap n va m: ");
    scanf("%d %d", &n, &m);
    nhap(n, m, arr);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int k = j + 1; k < m; k++) {
                if (arr[i][j] > arr[i][k]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
    printf("Ket qua sau khi sap xep la:\n");
    xuat(n, m, arr);
}