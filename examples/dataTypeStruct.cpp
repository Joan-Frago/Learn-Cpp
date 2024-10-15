# include <iostream>
using namespace std;

// Declare a structure named car
    struct car {
        string brand;
        string model;
        int year;
    };

int main() {
    // Create a car structure and store it myCar1
    car myCar1;
    myCar1.brand = "Opel";
    myCar1.model = "Corsa";
    myCar1.year = 1992;

    // Create another car structure and store it in myCar2
    car myCar2;
    myCar2.brand = "Audi";
    myCar2.model = "A1";
    myCar2.year = 2014;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}