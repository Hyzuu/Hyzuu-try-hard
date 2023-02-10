#include<stdio.h> 
int main() {
    int n, arr[10];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int S = arr[0];
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            S -= arr[i];
        }
        else {
            S += arr[i];
        }
    }
    printf("Tong cua day so la: %d \n", S);
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                sum++;
            }
        }
        if (sum == 1) {
            count++;
        }
        sum = 0;
    }
    printf("Trong day co %d so nguyen to", count);
    return 0;
}