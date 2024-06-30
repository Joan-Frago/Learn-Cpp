// percentage of total who finished
// percentage of male who finished
// percentage of female who finished

# include <iostream>
using namespace std;

int main() {
    int totalPart;
    int totalPartMale;
    int totalPartFemale;
    int totalFinished;
    int totalFinishedMale;
    int totalFinishedFemale;
    float perFinished;
    float perFinishedMale;
    float perFinishedFemale;

    cout << "How many participants were there?" << endl;
    cin >> totalPart;

    cout << "How many of " << totalPart << " were male?" << endl;
    cin >> totalPartMale;

    totalPartFemale = totalPart - totalPartMale;
    cout << "There were " << totalPartFemale << " female participants" << endl;

    cout << "How many of " << totalPart << " finished?" << endl;
    cin >> totalFinished;

    cout << "How many of the " << totalFinished << " who finished were male?" << endl;
    cin >> totalFinishedMale;

    totalFinishedFemale = totalFinished - totalFinishedMale;
    cout << "There were " << totalFinishedFemale << " female finishers" << endl;
    
    cout << endl << endl << "PERCENTAGE WHO FINISHED" << endl;
    // calculate

    cout << endl << endl << "PERCENTAGE OF MALE WHO FINISHED" << endl;
    // calculate

    cout << endl << endl << "PERCENTAGE OF FEMALE WHO FINISHED" << endl;
    // calculate

    return 0;
}