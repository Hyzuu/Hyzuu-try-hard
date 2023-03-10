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
    s[k] = '\0';
}
void inhoa(char s[100]) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 32) {
            s[i + 1] -= 32;
        }
    }
}
int main() {
    char s[100];
    fgets(s, 100, stdin);
    xoa_khoang_trong(s);
    strlwr(s);
    s[0] -= 32;
    inhoa(s);
    printf("%s", s);
}