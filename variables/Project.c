#include <stdio.h>

int main() {
    /*
    simple program knowing some c++ in c
    */

    int Investment;
    printf("Enter the investment amount: ");
    scanf("%d", &Investment);

    int Years_For_Investment;
    printf("Enter the number of years for investment: ");
    scanf("%d", &Years_For_Investment);

    int Return_Rate;
    printf("Enter the return rate (as a percentage): ");
    scanf("%d", &Return_Rate);

    int Curent_Ammount = Investment;

    int i = 1;
    
    while (i <= Years_For_Investment) {
        Curent_Ammount = Curent_Ammount * Return_Rate / 100 + Curent_Ammount;
        printf("Year %d: %d\n", i, Curent_Ammount);
        i++;
    }

}