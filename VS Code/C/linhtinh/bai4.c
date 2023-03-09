#include<stdio.h>
#include<string.h>
void xoa_khoang_trong(char* s) {
    int f = 0;
    while (s[f] == 32) {
        f++;
    }
    int k = 0;
    for (int i = f; i < strlen(s); i++) {
        if (s[i] != 32) {
            s[k++] = s[i];
        }
        else if (s[i - 1] != 32) {
            s[k++] = s[i];
        }
    }
}
int main() {
    char s[100];
    fgets(s, 100, stdin);
    xoa_khoang_trong(s);
    puts(s);
}