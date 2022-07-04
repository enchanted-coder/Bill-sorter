#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    system("clear");
    int dollar_amount, _20, _10, _5, _1;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    _20 = dollar_amount / 20;
    _10 = (dollar_amount%20) / 10;
    _5 = (dollar_amount%10) / 5;
    _1 = (dollar_amount%5) / 1;

    printf("$20 bills: %d\n", _20);
    printf("$10 bills: %d\n", _10);
    printf("$5 bills: %d\n", _5);
    printf("$1 bills: %d\n", _1);

    return 0;
}