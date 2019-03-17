#include <iostream>
#include <fstream>
using namespace std;

//list of methods used throughout the program
void newFile();
void loadFile();

int main() {
    int usrInp;

    cout << "1. Create New File" << endl;
    cout << "2. Load File" << endl;
    cin >> usrInp;

    //determining which method to call
    if (usrInp == 1) {
        newFile();
    } else {
        loadFile();
    }

    return 0;
}

void newFile() {
    ofstream outFile;

    string filename;
    cout << "Enter name of new file: ";
    cin >> filename;
    cout << endl;

    outFile.open(filename);

    int favCryptStreamer;

    cout << "===========" << endl;
    cout << "Who is Your Favorite Crypt Streamer" << endl;
    cout << "1. kevin_crypt" << endl;
    cout << "2. Chris Goblin" << endl;
    cout << "3. NebulaIsMe" << endl;
    cout << "4. Summit_Vegetard" << endl;

    cin >> favCryptStreamer;

    //determinging all cases
    if (favCryptStreamer == 1) {
        outFile << "1 cunt" << endl;
    } else if (favCryptStreamer == 2) {
        outFile << "2 cunt" << endl;
    } else if (favCryptStreamer == 3) {
        outFile << "3 cunt" << endl;
    } else {
        outFile << "4 cunt" << endl;
    }

    cout << "File Saved" << endl;
    outFile.close();
}

void loadFile() {
    ifstream inFile;

    string filename;
    cout << "Enter name of .csf file: ";
    cin >> filename;
    cout << endl;

    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "Invalid Filename." << endl;
        exit(1);
    }

    int favCryptStreamer;
    inFile >> favCryptStreamer;

    cout << "Your Favorite Crypt Streamer is: ";
    //determining case
    if (favCryptStreamer == 1) {
        cout << "kevin_crypt" << endl;
    } else if (favCryptStreamer == 2) {
        cout << "Chris Goblin" << endl;
    } else if (favCryptStreamer == 3) {
        cout << "NebulaIsMe" << endl;
    } else {
        cout << "Summit_Vegetard" << endl;
    }

    inFile.close();
}
