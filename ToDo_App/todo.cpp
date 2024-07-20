# include <iostream>
using namespace std;

int main() {
    int option;
    string tasks[] = {""};
    

    cout << "WELCOME TO THE TODO APP" << endl << endl <<
    "1.   Create new task." << endl <<
    "2.   See current tasks." << endl <<
    "3.   Remove task." << endl <<
    "4.   Exit." << endl << endl <<
    "Please choose an option among the previous --> ";
    cin >> option;

    if (option == 1) {
        string newTask;
        cout << "How is the new task going to be called?" << endl << "-->";
        cin >> newTask;
	tasks.append(newTask);
	cout << tasks;
    }
    else if (option == 2) {
        // See current tasks
    }
    else if (option == 3) {
        // Remove task
    }
    else if (option == 4) {
        // Close program
    }


    cout << endl;
    return 0;
}
