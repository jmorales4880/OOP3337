#include "Customer.h"
#include <iostream>

using namespace std;

int Customer::activeCustomers = 0;

Customer::Customer() {
    name = "Unknown";
    accountNumber = 0;
    activeCustomers++;
}

Customer::Customer(string name, int accountNumber) {
    this->name = name;
    this->accountNumber = accountNumber;
    activeCustomers++;
}

Customer::~Customer() {
    activeCustomers--;
}

string Customer::getName() const { return name; }
int Customer::getAccountNumber() const { return accountNumber; }

void Customer::setName(string name) { this->name = name; }
void Customer::setAccountNumber(int accountNumber) { this->accountNumber = accountNumber; }

void Customer::displayInfo() const {
    cout << "Name: " << name << " | Account Number: " << accountNumber << endl;
}