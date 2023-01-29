#include<iostream>

using namespace std;

int check(string k) {
	string Yes, No;
	if (k == No) {
		return 1;
	}
	else if (k == Yes) {
		return 0;
	}
}

void xuat(int arr[],int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	int arr[10];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	} 
	int a, b;
	cout << "Vi tri cua so can thay doi la: ";
	cin >> a;
	cout << "Thay doi thanh so: ";
	cin >> b;
	string k;
	cout << "Ban muon thay doi lua chon ko: " << endl;
	cin >> k;
	if (check(k)) {
		arr[a] = b;
		xuat(arr, n);
	}
	else {
		cout << "Ke me";
	}
}