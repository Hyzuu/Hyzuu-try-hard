#include<stdio.h>
#include<string.h>
int main() {
    int arr[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < n; i++) {
		int text = arr[i];
		arr[i] = 0;
		for (int j = i - 1; j >= 0; j-- ) {
			if (text < arr[j]) {
				
			}
		}
	}
}