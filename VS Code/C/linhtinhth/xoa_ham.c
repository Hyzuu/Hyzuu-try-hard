#include<stdio.h>
void nhap(int arr[], int &n) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void xuat(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        printf("%d\n", arr[i]);
    }
}
void xoa(int arr[], int &a, int &n) {
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &a);
    for (int i = a; i < n; i++) {
        int t;
        t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
    }
    n -= 1;
}
int main() {
    int n, a;
    int *arr = new int(n);
    nhap(arr, n);
    xoa(arr, a, n);
    xuat(arr, n);
    delete[] arr;
    return 0;
}