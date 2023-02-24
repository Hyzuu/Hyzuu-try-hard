#include<stdio.h>
#include<string.h>
int main() {
    char s1[200];
    printf("Nhap ho va ten: ");
    fgets(s1, sizeof(s1), stdin);
    strlwr(s1); 
    for (int i = 0; i < strlen(s1); i++) {
        if ((int)s1 == 32) {
            s1[i + 1] = s1[i + 1] - 32;
        }
    }
    printf("Ten cua ban la: %s", s1);

}