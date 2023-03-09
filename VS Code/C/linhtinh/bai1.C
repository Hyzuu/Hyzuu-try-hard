#include<stdio.h>
int main() {
    int n, L, R, arr[10];
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap L va R: ");
    scanf("%d %d", &L, &R);
    printf("Nhap vao mang: \n");
    for (int i = 0 ; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = L; i < R; i++) {
        for (int j = i + 1; j <= R; j++) {
            if (arr[i] < arr[j]) {
            int index = arr[i];
            arr[i] = arr[j];
            arr[j] = index;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}