#include<iostream>
using namespace std;

void nhap(int &n, int arr[]) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n, x, arr[10];
    nhap(n, arr);
    cout << "Nhap x: ";
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << i;
            break;
        }
    }
}