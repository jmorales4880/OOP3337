
#ifndef VIDEO_H
#define VIDEO_H
#include <string>
using namespace std;
class Video {
private:
string title;
string director;
int availableCopies;
double rentalPrice;
public:
Video();
Video(string title, string director, int copies, double price);
string getTitle() const;
string getDirector() const;
int getAvailableCopies() const;
double getRentalPrice() const;
void setTitle(string title);
void setDirector(string director);
void setAvailableCopies(int copies);
void setRentalPrice(double price);
void displayInfo() const;
bool rentCopy();
void returnCopy();
};
#endif
