#include<iostream>
using namespace std;
int main() {
    int day1, month1, year1;
    int day2, month2, year2;
    int count = 0;
    printf("Nhap moc thoi gian 1: ");
    scanf("%d %d %d", day1, month1, year1);
    printf("Nhap moc thoi gian 2: ");
    scanf("%d %d %d", day2, month2, year2);
    printf("Moc 1: %d/%d/%d \n", day1, month1, year1);
    printf("Moc 2: %d/%d/%d \n", day2, month2, year2);
    if (day2 > day1) {
        count = day2 - day1;
        day1 = day2;
    }
    else if (day2 < day1) {
        if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12) {
            count = 32 - day1;
            day1 = 1;
        }
    }
    int chenhlechnam = year2 - year1;

    while (chenhlechnam >= 0) {

    }
}