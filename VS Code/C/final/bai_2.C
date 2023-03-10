#include<stdio.h>
#include<string.h>

bool text_khoang_cach(char s[100]) {
    int text = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 32 && s[i + 1] == 32) {
            text++;
        }
    }
    if (text >= 1) {
        return false;
    }
    else {
        return true;
    }
}

int text_hoten(char s[100]) {
    int count = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 32) {
            count++;
        }
    }
    if (count >= 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int text_ki_tu(char s[100]) {
    int count = 0;
    for (int i = 0; i < strlen(s) - 1; i++) {
        if (s[i] < 'A' || s[i] > 'z') {
            if (s[i] == 32) {
                continue;
            }
            else {
                count++;
            }
        }
    }
    if (count == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void text_in_hoa(char s[100]) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[0] > 'A' && s[0] <'Z') {
            if (s[i] == 32 && s[i + 1] < 'A' )
        }
    }
}
int main() {
    char s[100];
    fgets(s, 100, stdin);
    printf("%d", text_ki_tu(s));
}