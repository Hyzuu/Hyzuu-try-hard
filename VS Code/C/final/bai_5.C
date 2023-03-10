#include<stdio.h>

void nhap(int *n, int arr[100]) {
    printf("Nhap n: ");
    scanf("%d", &(*n));
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

void text(int n, int arr[100]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = 0;
            }
        }
    }
}

void xapxep(int n, int arr[100]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, arr[100];
    nhap(&n, arr);
    text(n, arr);
    xapxep(n, arr);
    printf("%d", arr[2]);
}