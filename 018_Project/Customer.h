
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;
class Customer {
private:
string name;
int accountNumber;
public:
static int activeCustomers;
Customer();
Customer(string name, int accountNumber);
~Customer();
string getName() const;
int getAccountNumber() const;
void setName(string name);
void setAccountNumber(int accountNumber);
void displayInfo() const;
};
#endif
