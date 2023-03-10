#include<stdio.h>
int main() {
    int n;
    printf("Nhap so fibonacci thu N: ");
    scanf("%d", &n);
    int arr[100];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("%d", arr[n - 1]);
}