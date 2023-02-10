#include<stdio.h>
void main() {
    int arr[10], a, b, n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    n += 1;
    printf("Nhap vao vi tri gia tri muon them vao: ");
    scanf("%d", &a);
    printf("Nhap vao gia tri: ");
    scanf("%d", &b);
    for (int i = n; i > a + 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[a + 1] = b;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}