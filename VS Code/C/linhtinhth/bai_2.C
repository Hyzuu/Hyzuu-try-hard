#include<stdio.h>
#include<math.h>
int main() {
    int n, arr[100];
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    printf("Nhap phan tu vao mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int dem;
    for (int i = 0; i < n; i++) {
        int khaican = sqrt(arr[i]);
        if (khaican * khaican == arr[i]) {
            dem += 1;
        }
    }
    printf("%d", dem);
    return 0;
}