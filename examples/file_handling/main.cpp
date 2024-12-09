#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string openFile() {
	// Create file variable
	ifstream iFile;

	// Open file
	iFile.open("path/to/file/file.txt");

	// Create contents of file variable
	string aContent;

	// Always check if the file is open
	if (iFile.is_open()) {

		// Loop until eof
		while (iFile.good()) {

			// Add line to contents variable
			aContent = iFile.get();

			// print contents of file
			cout << aContent;
		}
	}
}
