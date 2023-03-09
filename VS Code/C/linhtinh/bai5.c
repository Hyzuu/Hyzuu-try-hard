#include <stdio.h>

int main() {
    int n, l, r;
    int arr[100];
    scanf("%d %d %d", &n, &l, &r);
    
    // Nhập dãy số
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sắp xếp các phần tử trong đoạn [L,R] giảm dần
    for (int i = l; i <= r; i++) {
        int max_idx = i;
        for (int j = i + 1; j <= r; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        // Hoán đổi giá trị của phần tử lớn nhất và phần tử đang xét
        int temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
    
    // In ra dãy số đã sắp xếp
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
