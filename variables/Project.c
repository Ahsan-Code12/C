#include <stdio.h>

// Function prototypes taake compiler ko pehle se pata ho
void InvestMent_Tracker();
void Algo();

void algorithm()
{
    printf("Welcome to the Investment Tracker!\n");
    Algo();
}

void Algo()
{
    int user_12;
    printf("Wanna track your investments? Let's get started!\n");
    printf("Enter 2 to Start, 1 to Exit: ");
    scanf("%d", &user_12); // %d use kiya taake direct integer match ho

    if (user_12 == 2)
    {
        InvestMent_Tracker();
    }
    else if (user_12 == 1)
    {
        printf("Exiting the program.\n");
    }
    else
    {
        printf("Invalid input. Please enter 1 or 2.\n");
        algorithm(); // Dobara menu par le jane ke liye
    }
}

void InvestMent_Tracker()
{
    double Investment;
    printf("Enter the investment amount: ");
    scanf("%lf", &Investment);

    int Years_For_Investment;
    printf("Enter the number of years for investment: ");
    scanf("%d", &Years_For_Investment);

    double Return_Rate;
    printf("Enter the return rate (as a percentage, e.g., 100 for double): ");
    scanf("%lf", &Return_Rate);

    double Curent_Ammount = Investment;
    int i = 1;

    while (i <= Years_For_Investment)
    {
        Curent_Ammount = Curent_Ammount * Return_Rate / 100 + Curent_Ammount;
        printf("Year %d: %lf\n", i, Curent_Ammount);
        i++;
    }

    int Quit_Not;
    printf("Enter 1 to quit or 0 to continue: ");
    scanf("%d", &Quit_Not);

    if (Quit_Not == 1)
    {
        printf("Exiting the program.\n");
    }
    else
    {
        printf("Continuing the program.\n");
        Algo(); // Dobara menu par le jane ke liye
    }
}

int main()
{

    int user_choicing;
    printf("Welcome to the Investment Tracker!\n");
    printf("Enter 1 to Start or 0 to Exit: ");
    scanf("%d", &user_choicing);

    if (user_choicing == 1)
    {
        algorithm();
    }

    else
    {
        printf("Exiting the program.\n");
    }
    return 0;
}
