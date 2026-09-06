#include <stdio.h>

// Function prototypes taake compiler ko pehle se pata ho
void InvestMent_Tracker();
void Start();

void algorithm()
{
    printf("Welcome to the Investment Tracker!\n");
    Start();
}

void final_revenue(double invest, int year, double return_rate) {
    double current_ = invest;

    int i = 1;

    while (i <= year){
        current_ = current_ * return_rate / 100 + current_;
        i++;
    }

    printf("%lf\n", current_);
}

void Start()
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

void list(double investment, int year, double return_rate)
{
    printf("|---------------------------------------------|\n");
    printf("Investment: %lf\n", investment);
    printf("Years: %d\n", year);
    printf("Return Rate: %lf\n", return_rate);
    printf("|---------------------------------------------|\n");

    int user_Ques;
    printf("1 to see final revenue or 0 to quit or 3 to start again");
    scanf("%i", &user_Ques);

    if (user_Ques == 1){
        final_revenue(investment, year, return_rate);
    }

    else if(user_Ques == 0){
        printf("bye");
    }

    else if(user_Ques == 3){
        Start();
    }
}

void InvestMent_Tracker()
{
    printf("|---------------------------------------------|\n");
    printf("|          Investment Tracker Program         |\n");
    printf("                By Ahsan Ali\n");
    printf("|---------------------------------------------|\n");
    double Inve#include <stdio.h>

// Function prototypes taake compiler ko pehle se pata ho
void InvestMent_Tracker();
void Start();

void algorithm()
{
    printf("Welcome to the Investment Tracker!\n");
    Start();
}

void final_revenue(double invest, int year, double return_rate) {
    double current_ = invest;

    int i = 1;

    while (i <= year){
        current_ = current_ * return_rate / 100 + current_;
        i++;
    }

    printf("%lf\n", current_);
}

void Start()
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

void list(double investment, int year, double return_rate)
{
    printf("|---------------------------------------------|\n");
    printf("Investment: %lf\n", investment);
    printf("Years: %d\n", year);
    printf("Return Rate: %lf\n", return_rate);
    printf("|---------------------------------------------|\n");

    int user_Ques;
    printf("1 to see final revenue or 0 to quit or 3 to start again");
    scanf("%i", &user_Ques);

    if (user_Ques == 1){
        final_revenue(investment, year, return_rate);
    }

    else if(user_Ques == 0){
        printf("bye");
    }

    else if(user_Ques == 3){
        Start();
    }
}

void InvestMent_Tracker()
{
    printf("|---------------------------------------------|\n");
    printf("|          Investment Tracker Program         |\n");
    printf("                By Ahsan Ali\n");
    printf("|---------------------------------------------|\n");
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

    int user_list_choice;
    printf("Do you want to see the list of investments? Enter 1 for Yes or 0 for No: ");
    scanf("%d", &user_list_choice);

    if (user_list_choice == 0)
    {
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
            Start(); // Dobara menu par le jane ke liye
        }
    }

    else if(user_list_choice == 1)
    {
        list(Investment, Years_For_Investment, Return_Rate);
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
stment;
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

    int user_list_choice;
    printf("Do you want to see the list of investments? Enter 1 for Yes or 0 for No: ");
    scanf("%d", &user_list_choice);

    if (user_list_choice == 0)
    {
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
            Start(); // Dobara menu par le jane ke liye
        }
    }

    else if(user_list_choice == 1)
    {
        list(Investment, Years_For_Investment, Return_Rate);
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
