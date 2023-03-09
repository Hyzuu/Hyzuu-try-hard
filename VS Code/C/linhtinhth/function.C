#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    int a[n];
    cout << "Nhap phan tu: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        a[i] = rand()%100;
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    //min - max
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }    
    cout << endl << "Max: " << max;
    return 0;
}