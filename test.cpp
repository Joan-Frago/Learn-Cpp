# include <iostream>
using namespace std;


int main() {
    int num;
    cout << "Put a number: ";
    cin >> num;

    for (int i; i != num + 1; i++) {
        cout << i << endl;
    }
    return 0;
}
