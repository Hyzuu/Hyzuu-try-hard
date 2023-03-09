#include<stdio.h>
void nhap(int* n, int* m, int arr[][100]) {
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap m: ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

int timsonguyento(int index) {
    int sum = 0;
    for (int i = 1; i < index; i++) {
        if (index % i == 0) {
            sum++;
        }
    }
    if (sum == 1) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int arr[100][100];
    int n, m;
    nhap(n, m, arr);
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            if (timsonguyento(arr[i][j])) {
                sum += arr[i][j];
            }
        }
        printf("%d\n", sum);
    }
}