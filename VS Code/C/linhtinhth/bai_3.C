#include<stdio.h>
int main() {
    int n, arr[100][100];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int k = n;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int k = arr[i][0]; k <= arr[i][1]; k++) {
            int text = 0;
            for (int e = 1; e < k; e++) {
                if (k % e == 0) {
                    text++;
                }
            }
            if (text == 1) {
                sum += k;
            }
        }
        printf("%d", sum);
        sum = 0;
    }
}