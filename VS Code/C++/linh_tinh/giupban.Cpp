#include<stdio.h>
int main() {
    int n;
    int arr[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 1; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                sum++;
            }
        }
        if (sum == 1) {
            printf("%d", arr[i]);
        }
    }
}