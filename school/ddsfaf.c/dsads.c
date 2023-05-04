#include <stdio.h>

int main()
{
    int cof; // 주문한 커피 수
    int point; // mj포인트 갯수
    int credit; // 신용카드 실적
    int discountable_price; // 할인받을 수 있는 금액
    int total_price; // 총 금액
    int num_credit; // 신용카드로 할인된 갯수
    int num_point; // 포인트로 할인된 갯수
    int dc_price; // 할인된 금액
    int dc_point; // mj포인트로 할인된 금액
    int dc_credit;  // 신용카드 실적으로 할인된 금액

    printf("주문한 커피의 양, mj 포인트 수, 신용카드 실적(원)을 차례대로 입력해주세요.\n");
    scanf("%d %d %d", &cof, &point, &credit);

    discountable_price = (cof * 4000) / 2;
    num_point = point / 12;
    num_credit = (credit - 300000) / 100000;
    total_price = cof * 4000;

    if (point >= 12)
    {
        dc_point = num_point * 4000;

        if (point > discountable_price)
        {
            dc_point = discountable_price;
        }
    }
    else
    {
        dc_point = 0;
    }

    printf("소진된 MJ포인트는 %d개 입니다.\n", num_point * 12);
    printf("MJ포인트로 할인된 금액은 %d원 입니다.\n", dc_point);

    int remaining_discountable; // 남은 할인가능 금액
    remaining_discountable = discountable_price - dc_point;

    int remaining_point; // 잔여 포인트
    remaining_point = point - (num_point * 12);

    if (credit >= 300000)
    {
        dc_credit = num_credit * 4000;

        if (dc_credit > remaining_discountable)
        {
            dc_credit = remaining_discountable;
        }
    }
    else
    {
        dc_credit = 0;
    }

    dc_price = remaining_discountable - dc_credit;
    int used_credit; // 소진된 신용카드 실적
    used_credit = dc_credit * 100000 / 4000;

    int remaining_credit; // 잔여 신용카드 실적
    remaining_credit = credit - used_credit;

    dc_price = dc_point + dc_credit;
    total_price = total_price - dc_price;
    remaining_point = remaining_point + total_price / 4000;

    printf("소진된 신용카드 실적은 %d원 입니다.\n", used_credit);
    printf("신용카드로 할인된 금액은 %d원 입니다.\n", dc_credit);
    printf("지불할 금액은 %d원 입니다.\n", total_price);
    printf("남은 MJ포인트는 %d개 입니다.\n", remaining_point);
    printf("남은 신용카드 실적은 %d개 입니다.\n", remaining_credit);
    return 0;
}