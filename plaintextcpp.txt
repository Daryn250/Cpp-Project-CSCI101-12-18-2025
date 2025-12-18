#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <array>
#include <cstring>
#include <algorithm>
#include <sstream>

using namespace std;
// make a 2d list with len 100 and height 10
array<array<string, 10>, 100> matrix;


ifstream inFS("readfromme.txt");
int xcoord;
int ycoord;
int inchar;
string character;
string line;
bool enable = true;

int main() {
    if (!inFS.is_open()) {
        cout << "Error loading file. exiting program. have a nice day.";
        return 0;
    }

    // fill all parts of array with spaces. don't ask how long this took to figure out.
    for (auto &col : matrix) { // loops through matrix using col as a list identifier. python equivelant is for col in matrix.
        col.fill(" ");
    }

    getline(inFS, line);
    stringstream ss(line);

    while (true) {
        if (!(ss >> xcoord)) {
            break; //end of file
        }
        ss >> inchar;
        ss >> ycoord;
        if (inchar == 1) {
            character = "█"; // character representation of 1
        }
        else if (inchar == 2) {
            character = "░"; // character representation of 2
        }
        else {
            cout << "Error from character " << inchar << "." << endl; // catch statement for error characters.
            cout << "x: " << xcoord << ", char: " << character << ", y: " << ycoord << endl; // debug printing
        }
        if (xcoord < 100 && xcoord > -1) {
            if (ycoord < 10 && ycoord > -1) {
                matrix[xcoord][ycoord] = character; // set character at [x][y] to character
            }
        }
        
        
    }


    if (enable) {
    for (int y = 0; y<10; y++) {
        for (int x = 0; x<100; x++) {
            cout << matrix[x][y];
        }
        cout << endl;
    }
    }

    return 0;
}