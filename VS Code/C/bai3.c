#include<stdio.h>
void main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int arr[10][10];
    for (int i = 0; i < n; i++) {
        for (int t = 0; t <= 2; t++) {
            scanf("%d", &arr[i][t]);
        }
    }
    for (int i = 0; i < n; i++) {
        int a = arr[i][0];
        int b = arr[i][1];
        int c = arr[i][2];
        if (a == b + c || b == a + c || c == a + b) {
            printf("YESsss\n");
        }
        else {
            printf("NO\n");
            printf("realy");
        }
    }
}