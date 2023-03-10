#include <stdio.h>
#include <string.h>

int is_alpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

int main() {
    char name[100];
    printf("Nhap ho ten: ");
    fgets(name, sizeof(name), stdin);

    int length = strlen(name);
    printf("%d", length);

   

    
    return 0;
}
