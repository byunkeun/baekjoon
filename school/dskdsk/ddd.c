#include <stdio.h>

int Leap(int year);
int Daysofmonth(int year, int month);
int Totaldays(int year, int month);
int Startday(int year , int month);
void Printday(int year, int month);

int main()
{
    int year, month;
    printf("년 월을 입력하세요: ");
    scanf("%d %d", &year, &month);
    Printday(year, month);
    return 0;
}

int Leap(int year)
{
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

int Daysofmonth(int year, int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        if (Leap(year) == 1) {
            return 29;
        } else {
            return 28;
        }
    }
}

int Totaldays(int year, int month)
{
    int total_day = 0;
    for (int n = 1900; n < year; n++) {
        if (Leap(n) == 1) {
            total_day = total_day + 366;
        } else {
            total_day = total_day + 365;
        }
    }
    for (int i = 1; i < month; i++) {
        total_day = total_day + Daysofmonth(year, i);
    }
    return total_day;
}

int Startday(int year, int month)
{
    int start_day;
    start_day = (1 + Totaldays(year, month)) % 7;
    return start_day;
}

void Printday(int year, int month)
{
    printf("일 월 화 수 목 금 토\n");
    for (int j = 0; j < Startday(year, month); j++) {
        printf(" * ");
    }
    for (int k = 1; k <= Daysofmonth(year, month); k++) {
        printf("%2d", k);
        if ((Startday(year, month) + k) % 7 == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}
