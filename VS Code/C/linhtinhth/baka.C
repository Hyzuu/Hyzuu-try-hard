#include<stdio.h>
#include "function.C"

int main() {
    int n, arr[10];
    nhap(n, arr);
    for (int i = 0; i < n; i++) {
        if (text(arr[i])) {
            printf("%d la True \n", arr[i]);
        }
        else {
            printf("%d la False \n", arr[i]);
        }
    }
}