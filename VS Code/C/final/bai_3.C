#include<stdio.h>

void nhap(int n, int m, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

int sum_truc_chinh(int n, int m, int mid, int arr[][100]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j == mid) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
int text_snt(int real) {
    int sum = 0;
    for (int i = 1; i < real; i++) {
        if (real % i == 0) {
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
    int n, m, arr[100][100];
    printf("Nhap n va m: ");
    scanf("%d %d", &n, &m);
    nhap(n, m, arr);
    int mid = (m - 1) / 2;
    int ketqua = sum_truc_chinh(n, m, mid, arr);
    if (text_snt(ketqua)) {
        printf("%d la ma tran truc to", ketqua);
    }
    else {
        printf("%d ko phai la ma tran tuc so", ketqua);
    }
}