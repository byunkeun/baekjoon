#include <stdio.h>
struct item{
    int data;
    struct item *next;
};
struct item pStack;
void getOrder(){
    int order;
    scnaf("%d", &order);
}
//1 insert
//2 print second top
//3 print num
//4 isempty
int main(int argc, char const *argv[])
{
    int num;
    for( int i = 0 ; i < num ; i++ ){
        getOrder();
    }

    return 0;
}
