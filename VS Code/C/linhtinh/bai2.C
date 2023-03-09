#include<stdio.h>

#include<string.h>

void findnum(char s[100]) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 48 && s[i] <= 57) {
            printf("%c", s[i]);
        }
        if (s[i + 1] >= 48 && s[i + 1] <= 57 && s[i] > 57) {
            printf("\n");
        }
    }
}

int main() {
    char s[100];
    printf("Nhap vao chuoi: ");
    scanf("%s", s);
    findnum(s);
}