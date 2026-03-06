/*Design a class named Account that contains:
1) A private int data field named id for the account.
2) A private double data field named balance for the account.
3) A private double data field named annual_interest_rate that stores the current
annual interest rate.
4) The accessor (get) functions for id, and balance.
5) The mutator (set) functions for id, balance and annual_interest_rate. Id, balance
and annual interest rate can be initialized only with positive values, otherwise,
they should be set to 0.
6) A user-defined constructor that creates an account object with given three data
fields. Hint: use appropriate mutator functions.
7) A function named getMonthlyInterest() that returns the monthly interest
(amount earned monthly based on the account balance and annual interest
rate).
8) A function named withdraw(amount) that withdraws a specified amount from
the account. → void withdraw (double amount). The function cannot withdraw
more than current balance.
9) A function named deposit(amount) that deposits a specified amount to the
account. → void deposit (double amount). The function cannot deposit negative
amount.
*/

#include <iostream>

using namespace std;

class Account {
private:
    int id;
    double balance;
    double annual_interest_rate;
public:
    // constructor with default parameters
    Account(int id = 0, double balance = 0.0, double rate = 0.0) {
        setId(id);
        setBalance(balance);
        setAnnualInterestRate(rate);
    }

    // accessors
    int getId() const { return id; }
    double getBalance() const { return balance; }
    double getAnnualInterestRate() const { return annual_interest_rate; }

    // mutators
    void setId(int newId) {
        id = (newId > 0 ? newId : 0);
    }
    void setBalance(double newBal) {
        balance = (newBal > 0.0 ? newBal : 0.0);
    }
    void setAnnualInterestRate(double rate) {
        annual_interest_rate = (rate > 0.0 ? rate : 0.0);
    }

    double getMonthlyInterest() const {
        return balance * (annual_interest_rate / 12.0);
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Withdrawal error: invalid amount or insufficient funds\n";
        }

    }

    void deposit(double amount) {
        if (amount >= 0) {
            balance += amount;
        } else {
            cout << "Deposit error: amount must be non-negative\n";
        }
    }
};

int main() {
    // simple demonstration of the Account class
    Account a(1122, 20000, 0.045);
    a.withdraw(2500);
    a.deposit(3000);

    cout << "ID: " << a.getId() << "\n";
    cout << "Balance: " << a.getBalance() << "\n";
    cout << "Monthly interest: " << a.getMonthlyInterest() << "\n";

    return 0;
}
<iostream>
