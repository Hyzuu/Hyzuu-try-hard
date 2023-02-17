#include<iostream>
using namespace std;
int main() {
    int day, month, year;
    printf("Nhap ngay thang nam: ");
    scanf("%d %d %d", &day, &month, &year);
    printf("%d/%d/%d \n", day, month, year);
    int count;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        count = 32 - day;
        day = 1;
        month++;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        count = 31 - day;
        day = 1;
        month++;
    }
    else if (month == 2) {
        count = 29 - day;
        day = 1; 
        month++;
    }
    printf("%d %d \n",day, month);
    for (int i = month; i < 13; i++) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            count += 31;
        }
        else if (month == 4 || month == 6 || month== 9 || month == 11) {
            count += 30;
        }
        else if (month == 2) {
            count += 29;
        }
    }
    printf("Khoang cach den ngay dau nam sau la: %d", count);
}