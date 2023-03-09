#include<stdio.h>
int main() {
    int n, arr[100][100];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int sumchinh = 0;
    int sumphu = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sumchinh += arr[i][j];
            }
        }
    }
    // duong cheo phu
    int text = (n - 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == text) {
                sumphu += arr[i][j];
                text -= 1;
            }
        }
    }
    printf("Tong duong cheo chinh: %d\n", sumchinh);
    printf("Tong duong cheo phu%d", sumphu);
}