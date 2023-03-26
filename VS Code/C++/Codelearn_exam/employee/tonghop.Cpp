#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int b[], int nb);
void Sapxepchanle(int a[], int n, int b[], int &nb);

int main()
{
	int a[100], b[100];
	int n, nb;
	nhap(a, n);
	Sapxepchanle(a, n, b, nb);
	xuat(b, n);
	return 0;
}
void nhap(int a[], int &n)
{
	cout << "nhap n= ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]= ";
		cin >> a[i];
	}
}
void xuat(int b[], int nb)
{
	for (int i = 0; i < nb; i++)
	{
		cout << b[i] << "  ";
	}
}
void Sapxepchanle(int a[], int n, int b[], int &nb)
{
	nb = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0 && a[i] != 0)
			b[nb++] = a[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] == 0)
			b[nb++] = a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1)
			b[nb++] = a[i];
	}
}