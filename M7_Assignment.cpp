// M7 Assignment JensenZachary
// Monthly Budget

#include <iostream>
#include <string>
using namespace std;

// Hold monthly budget details
struct MonthlyBudget {
    double housing;
    double utilities;
    double household;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

// Functions
void setBudget(MonthlyBudget &);
void getUserExpenses(MonthlyBudget &);
void compareBudget(const MonthlyBudget &, const MonthlyBudget &);
void displayDifference(const string &, double, double);

int main() {
    MonthlyBudget budgeted, actual;

    setBudget(budgeted);
    cout << "\nEnter the amounts you actually spent in each category: \n";
    getUserExpenses(actual);

    compareBudget(budgeted, actual);

    return 0;
}

// Function to initialize the budgeted amounts
void setBudget(MonthlyBudget & budget) {
    budget.housing = 1000.00;
    budget.utilities = 200.00;
    budget.household = 63.00;
    budget.transportation = 52.00;
    budget.food = 250.00;
    budget.medical = 40.00;
    budget.insurance = 125.00;
    budget.entertainment = 130.00;
    budget.clothing = 80.00;
    budget.miscellaneous = 50.00;
}

// Function to get actual expenses from the user input
void getUserExpenses(MonthlyBudget & actual) {
    cout << "Housing: $ ";
    cin >> actual.housing;
    cout << "Utilities, Internet & Phone: $ ";
    cin >> actual.utilities;
    cout << "Household expenses: $ ";
    cin >> actual.household;
    cout << "Transportation: $ ";
    cin >> actual.transportation;
    cout << "Food: $ ";
    cin >> actual.food;
    cout << "Medical: $ ";
    cin >> actual.medical;
    cout << "Insurance: $ ";
    cin >> actual.insurance;
    cout << "Entertainment: $ ";
    cin >> actual.entertainment;
    cout << "Clothing: $ ";
    cin >> actual.clothing;
    cout << "Miscellaneous: $ ";
    cin >> actual.miscellaneous;
}

// Function to compare budgeted and actual expenses and display differences
void compareBudget(const MonthlyBudget &budgeted, const MonthlyBudget &actual) {
    cout << "\nBudget Comparison: \n";
    cout << "Category           Budgeted    Actual     Over/Under\n";
    cout << "-----------------------------------------------------\n";

    // Helper function for each category
    displayDifference("Housing", budgeted.housing, actual.housing);
    displayDifference("Utilities", budgeted.utilities, actual.utilities);
    displayDifference("Household", budgeted.household, actual.household);
    displayDifference("Transportation", budgeted.transportation, actual.transportation);
    displayDifference("Food", budgeted.food, actual.food);
    displayDifference("Medical", budgeted.medical, actual.medical);
    displayDifference("Insurance", budgeted.insurance, actual.insurance);
    displayDifference("Entertainment", budgeted.entertainment, actual.entertainment);
    displayDifference("Clothing", budgeted.clothing, actual.clothing);
    displayDifference("Miscellaneous", budgeted.miscellaneous, actual.miscellaneous);
}

// Function to display the difference for each category
void displayDifference(const string &category, double budgetedAmount, double actualAmount) {
    double difference = actualAmount - budgetedAmount;

    // Basic manual alignment
    cout << category;
    // Spaces for alignment
    for (int i = category.length(); i < 18; ++i) cout << ' ';

    // Display amounts with simple decimal formatting
    cout << "$" << budgetedAmount << "    $" << actualAmount << "    $" << difference << endl;
}
