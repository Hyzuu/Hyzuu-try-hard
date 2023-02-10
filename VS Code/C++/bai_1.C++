#include <iostream>
using namespace std;
void Sapxeptangdan(int A[],int n);
void xuat(int A[],int n);
int main()
{
	int A[100],n;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"]= ";
		cin>>A[i];
			Sapxeptangdan(A,i);
			xuat(A,i);
	}
}
void xuat(int A[],int n)
{
	for(int i=0;i<=n;i++)
	{
		cout<<A[i]<<"  ";
	}
}
void Sapxeptangdan(int A[],int n)
{
	int t;
	for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n+1;j++)
			{
				if (A[i] > A[j])
				{
					t = A[i];
					A[i]=A[j];
					A[j]=t;
				}
			}
		}
}