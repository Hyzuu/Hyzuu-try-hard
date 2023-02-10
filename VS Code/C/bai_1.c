#include<stdio.h>
int main() {
    int n, arr[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 10 == 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}