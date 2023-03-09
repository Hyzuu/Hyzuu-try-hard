#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    printf("Nhap chuoi: ");
    fgets(s, 100, stdin);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 48 && s[i] <= 57) {
            printf("%c", s[i]);
            if (s[i + 1] > 57) {
                printf("\n");
            }
        }
    }
}