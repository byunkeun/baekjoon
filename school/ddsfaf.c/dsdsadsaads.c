#include <stdio.h>

int main() {
    int orderQty, mjPoints, creditCardSpent, coffeeCount, coffeeDiscountCount, creditCardDiscountCount;
    int totalDiscount, mjDiscount, creditCardDiscount, totalPrice, remainingMjPoints, remainingCreditCardSpent;

    // 입력 받기
    printf("지금 주문한 커피 양: ");
    scanf("%d", &orderQty);

    printf("MJ 포인트: ");
    scanf("%d", &mjPoints);

    printf("신용카드 실적(원단위): ");
    scanf("%d", &creditCardSpent);

    // 초기화
    coffeeCount = orderQty;
    coffeeDiscountCount = coffeeCount / 12;
    creditCardDiscountCount = creditCardSpent / 100000;
    totalDiscount = 0;
    mjDiscount = 0;
    creditCardDiscount = 0;
    remainingMjPoints = 0;
    remainingCreditCardSpent = 0;

    // 커피 실적으로 할인
    if (coffeeCount > 0 && mjPoints > 0) {
        mjDiscount = mjPoints * 2000;
        if (coffeeDiscountCount > mjDiscount) {
            totalDiscount += mjDiscount;
            coffeeDiscountCount -= mjDiscount;
            remainingMjPoints = 0;
        }
        else {
            totalDiscount += coffeeDiscountCount * 2000;
            remainingMjPoints = mjPoints - coffeeDiscountCount;
            coffeeDiscountCount = 0;
        }
    }
    else {
        remainingMjPoints = mjPoints;
    }

    // 신용카드 실적으로 할인
    if (creditCardSpent > 0 && creditCardDiscountCount > 0) {
        creditCardDiscount = (creditCardDiscountCount * 10000) * (coffeeDiscountCount > 0 ? 1 : 2);
        if (creditCardDiscount > coffeeDiscountCount * 2000) {
            totalDiscount += coffeeDiscountCount * 2000;
            remainingCreditCardSpent = creditCardSpent - coffeeDiscountCount * 10000;
            coffeeDiscountCount = 0;
        }
        else {
            totalDiscount += creditCardDiscount;
            coffeeDiscountCount -= creditCardDiscount / 2000;
            remainingCreditCardSpent = creditCardSpent - creditCardDiscount;
        }
    }
    else {
        remainingCreditCardSpent = creditCardSpent;
    }

    // 할인 적용 후 지불 금액 계산
    totalPrice = (orderQty - coffeeDiscountCount) * 4000 - totalDiscount;

    // 결과 출력
    printf("소진된 MJ 포인트: %d\n", mjPoints - remainingMjPoints);
    printf("MJ포인트로 할인된 금액: %d원\n", mjDiscount);
    printf("소진된 신용카드 실적: %d원\n", creditCardSpent - remainingCreditCardSpent);
    printf("신용카드로 할인된 금액: %d원\n", creditCardDiscount);
    printf("지불할 금액: %d원\n", totalPrice);
    printf("남은 MJ포인트: %d\n", remainingMjPoints);
    printf("남은 신용카드 실적: %d\n", remainingCreditCardSpent);
    return 0;
}
