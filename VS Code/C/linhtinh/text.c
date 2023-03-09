#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    printf("Nhap string: ");
    fgets(s, sizeof s, stdin);
    printf("%d", strlen(s) - 1);
}