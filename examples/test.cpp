# include <iostream>
using namespace std;


int main() {
    int num;
    cout << "Put a number: ";
    cin >> num;

    for (int i; i != num; i++) {
        cout << i << endl;
    }
    return 0;
}
