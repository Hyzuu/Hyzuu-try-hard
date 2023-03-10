#include <stdio.h>
#include<string.h>

void removeSpaces(char* str)
{
    // Xác định vị trí đầu tiên không phải khoảng trắng
    int i = 0;
    while (str[i] == ' ') {
        i++;
    }

    // Xác định vị trí cuối cùng không phải khoảng trắng
    int j = strlen(str) - 1;
    while (j > i && str[j] == ' ') {
        j--;
    }

    // Tạo một chuỗi mới với các kí tự không phải khoảng trắng ở giữa các khoảng trắng
    int k = 0;
    for (int x = i; x <= j; x++) {
        if (str[x] != ' ') {
            str[k++] = str[x];
        }
        else if (x > i && str[x - 1] != ' ') {
            str[k++] = str[x];
        }
    }
    str[k] = '\0';
}

int main()
{
    char str[100];
    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin);

    removeSpaces(str);

    printf("Chuoi sau khi loai bo khoang trang thua: %s", str);

    return 0;
}