#include <iostream>
#include <iomanip>

int main()
{
    double startingBalance, annualInterestRate;
    const int months = 6;

    // Get the initial balance and annual interest rate from user
    std::cout << "What is the starting balance of your savings account: ";
    std::cin >> startingBalance;
    std::cout << "What is the annual interest rate (as a percentage) of your savings account: ";
    std::cin >> annualInterestRate;

    // Converts annual interest rate percentage to a monthly decimal rate
    double monthlyInterestRate = (annualInterestRate / 100) / 12;
    double balance = startingBalance;

    for (int month = 1; month <= months; ++month) {
        double deposit, withdrawal, startingMonthBalance = balance;

        // Get deposit amount, ensure it’s not a negative balance
        do {
            std::cout << "Month " << month << " - Please enter the total amount you Deposited: ";
            std::cin >> deposit;
            if (deposit < 0) {
                std::cout << "Deposits cannot be negative. Please re-enter the amount deposited.\n";
            }
        } while (deposit < 0);

        // Add deposit to balance
        balance += deposit;

        // Get withdrawal amount, make sure it’s not negative or more than the current balance
        do {
            std::cout << "Month " << month << " - Please enter the total amount to withdrawal: ";
            std::cin >> withdrawal;
            if (withdrawal < 0) {
                std::cout << "Withdrawal cannot be negative. Please re-enter the amount to withdrawal.\n";
            } else if (withdrawal > balance) {
                std::cout << "Withdrawal cannot exceed the current balance. Please re-enter the amount to withdrawal.\n";
            }
        } while (withdrawal < 0 || withdrawal > balance);

        // Subtract withdrawal from balance
        balance -= withdrawal;

        // Calculate the monthly interest based on the average of the starting and ending balances
        double endingMonthBalance = balance;
        double averageBalance = (startingMonthBalance + endingMonthBalance) / 2;
        double monthlyInterest = averageBalance * monthlyInterestRate;

        // Add the interest to the balance
        balance += monthlyInterest;

        // Display the balance at the end of each month
        std::cout << "End of Month " << month << " - Balance: $" << std::fixed << std::setprecision(2) << balance << "\n";
    }

    // Display final balance
    std::cout << "\n Your ending balance after 6 months is: $" << std::fixed << std::setprecision(2) << balance << "\n";

    return 0;
}
