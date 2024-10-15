# include <iostream>
using namespace std;

int main(){

struct {
    string brand;
    string model;
    int year;
} myCar1, myCar2;
// We can add variables by separating them with a comma

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Ask for user input
cout << "Car Brand: ";
cin >> myCar1.brand;

cout << "Car Model: ";
cin >> myCar1.model;

cout << "Car Year: ";
cin >> myCar1.year;

// Put data into the second structure
myCar2.brand = "Audi";
myCar2.model = "A1";
myCar2.year = 2015;

// Print the structure members
cout << "\n\nYour Cars:\n\n";
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

}
