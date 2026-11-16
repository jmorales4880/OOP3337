#include <iostream>
#include "Video.h"
#include "Customer.h"

using namespace std;

int main() {
    Video v1;
    Video v2("Inception", "Christopher Nolan", 2, 3.50);
    
    Customer c1;
    Customer c2("Ali", 101);
    
    cout << "Initial video details:" << endl;
    v1.displayInfo();
    v2.displayInfo();
    
    cout << "Customer details:" << endl;
    c1.displayInfo();
    c2.displayInfo();
    
    cout << "Active customers: " << Customer::activeCustomers << endl;
    
    cout << "Rent attempt 1 (expected 1): " << v2.rentCopy() << endl;
    cout << "Rent attempt 2 (expected 1): " << v2.rentCopy() << endl;
    cout << "Rent attempt 3 (expected 0): " << v2.rentCopy() << endl;
    
    v2.returnCopy();
    v2.displayInfo();
    
    v1.setTitle("The Matrix");
    v1.setDirector("Wachowskis");
    v1.setAvailableCopies(5);
    v1.setRentalPrice(4.00);
    
    cout << "v1 Updated: " << v1.getTitle() << ", " << v1.getDirector() 
         << ", " << v1.getAvailableCopies() << ", $" << v1.getRentalPrice() << endl;
         
    v1.setAvailableCopies(-5);
    v1.setRentalPrice(-2.00);
    
    cout << "After negative setter tests (values should remain unchanged):" << endl;
    v1.displayInfo();
    
    return 0;
}