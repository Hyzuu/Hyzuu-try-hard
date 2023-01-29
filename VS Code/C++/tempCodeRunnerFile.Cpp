#include<iostream>
using namespace std;
int kiemtra(int a) {
    if (a == 10) {
        return 1;
    }
    else {
        return 0;
    }
}
int main () {
    int a;
    cin >> a;
    kiemtra(a);
    if(kiemtra(a)) {
        cout << "Do la so lon hon 10";
    }
    else {
        cout << "Be hon 10";
    }

}