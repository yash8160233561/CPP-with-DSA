#include <iostream>
#include <string>

using namespace std;

class BankSystem
{
protected:
    int accountNumber;
    char accountHolderName[50];
    long accountBalance;
    double transactionAmount;

public:
    // Function to set up a new bank account
    void setAccountDetails()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore(); // Clear the input buffer for getline
        cout << "Enter Account Holder Name: ";
        cin.getline(accountHolderName, 50);
        cout << "Enter Your Bank Balance: ";
        cin >> accountBalance;
    }

    // Function to get the current account balance
    long getAccountBalance()
    {
        return accountBalance;
    }

    // Function to deposit an amount into the account
    void depositFunds()
    {
        cout << "Enter Deposit Amount: ";
        cin >> this->transactionAmount;
        this->accountBalance += transactionAmount;
    }

    // Function to set the amount to be withdrawn
    void setWithdrawalAmount()
    {
        cout << "Enter Withdraw Amount: ";
        cin >> this->transactionAmount;
    }

    // Function to perform a withdrawal from the account
    void performWithdrawal()
    {
        if (transactionAmount > accountBalance)
        {
            cout << endl
                 << endl
                 << "Insufficient balance";
        }
        else
        {
            this->accountBalance -= transactionAmount;
        }
    }

    // Function to display the current account balance
    void displayAccountBalance()
    {
        cout << "Balance: " << this->accountBalance;
    }

    // Function to display all account information
    void displayAccountInformation()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << accountBalance << endl;
    }
};

class FixedDepositAccount : public BankSystem
{
    int depositTermMonths;

public:
    float depositInterest;

    // Function to calculate interest for a fixed deposit account
    void calculateFixedDepositInterest()
    {
        depositTermMonths = 12;
        getAccountBalance();
        depositInterest = accountBalance * 0.07 * (12.0 / depositTermMonths);
        cout << endl
             << endl
             << "Deposit Interest: " << depositInterest;
    }
};

// Minimal SavingsAccount class to provide the methods used in main()
class SavingsAccount : public BankSystem
{
public:
    // Apply simple interest (placeholder implementation)
    void calculateAndApplyInterest()
    {
        // for demonstration, apply 5% interest to balance
        long bal = getAccountBalance();
        long interest = static_cast<long>(bal * 0.05);
        accountBalance += interest;
        cout << "Interest applied: " << interest << endl;
    }
};

// Minimal CheckingAccount class to provide the methods used in main()
class CheckingAccount : public BankSystem
{
public:
    // Placeholder: verify and withdraw a fixed small fee if balance sufficient
    void verifyAndWithdraw()
    {
        cout << "Enter amount to withdraw from checking account: ";
        cin >> transactionAmount;
        if (transactionAmount + 10 > accountBalance) // assume $10 fee
        {
            cout << "Insufficient funds for checking withdrawal (including fee)." << endl;
        }
        else
        {
            accountBalance -= static_cast<long>(transactionAmount + 10);
            cout << "Withdrawal successful. Fee 10 applied." << endl;
        }
    }
};

int main()
{
    int choice;
    do
    {

        SavingsAccount sa;
        CheckingAccount ca;
        FixedDepositAccount fa;

        cout << "1. Savings Account" << endl;
        cout << "2. Deposit amount" << endl;
        cout << "3. Withdraw amount" << endl;
        cout << "4. Get Balance amount" << endl;
        cout << "5. Get Account Info" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            sa.setAccountDetails();
            cout << "Account Created Successfully" << endl;
            break;
        case 2:
            sa.depositFunds();
            cout << endl;
            break;
        case 3:
            sa.setWithdrawalAmount();
            sa.performWithdrawal();
            cout << endl;
            break;
        case 4:
            sa.displayAccountBalance();
            cout << endl;
            break;
        case 5:
            sa.displayAccountInformation();
            cout << endl;
            break;
        case 6:
            sa.calculateAndApplyInterest();
            cout << endl;
            break;
        case 7:
            ca.verifyAndWithdraw();
            cout << endl;
            break;
        case 0:
            cout << "Exit..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0 && choice != 8);
}