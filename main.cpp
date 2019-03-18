#include <iostream>
#include <fstream>
using namespace std;

//list of methods used throughout the program
void newFile();
void loadFile();
void readDirectory();
void removeCsf();

int main() {
    int usrInp;
	
    cout << "1. Create New File" << endl;
    cout << "2. Load File" << endl;
    cout << "3. List .csf file is current directory" << endl;	// TODO add function to windows
    cout << "4. Remove all .csf files" << endl;
    cout << "5. Quit" << endl;
    cout << ">>> " << flush;
    cin >> usrInp;

    //determining which method to call
    if (usrInp == 1) {
        newFile();
        main();
    }else if(usrInp == 2){
        loadFile();
        main();
    }else if(usrInp == 3){
    	readDirectory();
    	main();
    }else if(usrInp == 4){
    	removeCsf();
    	main();
    }else{
		return 0;
	}
}

void newFile() {
    ofstream outFile;

    string filename;
    cout << "Enter name of new file: ";
    cin >> filename;
    cout << endl;

    outFile.open(filename+".csf");

    int favCryptStreamer;

    cout << "===========" << endl;
    cout << "Who is Your Favorite Crypt Streamer" << endl;
    cout << "1. kevin_crypt" << endl;
    cout << "2. Chris Goblin" << endl;
    cout << "3. NebulaIsMe" << endl;
    cout << "4. Summit_Vegetard" << endl;
    cout << ">>> ";

    cin >> favCryptStreamer;

    //determinging all cases
    switch(favCryptStreamer){
    case 1:
    	outFile << "1 cunt" << endl;
    	break;
    case 2:
    	outFile << "2 cunt" << endl;
    	break;
    case 3:
    	outFile << "3 cunt" << endl;
    	break;
    case 4:
    	outFile << "4 cunt" << endl;
    	break;
    default:
    	outFile << "sorry, the user of this file is an idiot who cannot follow simple instructions" << endl;
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
    	if(filename == "quit"){
    		exit(0);
    	}
    	
        cout << "Invalid Filename: \"" << filename << "\". Try again or type \"quit\" to exit program.\n" << endl;
        loadFile();
    }

    int favCryptStreamer;
    inFile >> favCryptStreamer;

    cout << "Your Favorite Crypt Streamer is: ";
    
    //determining case
    switch(favCryptStreamer){
    case 1:
    	cout << "kevin_crypt" << endl;
    	break;
    case 2:
    	cout << "Chris Goblin" << endl;
    	break;
    case 3:
    	cout << "NebulaIsMe" << endl;
    	break;
    case 4:
    	cout << "Summit_Vegetard" << endl;
    	break;
    default:
    	cout << "Unknown ID: " << favCryptStreamer << endl;
    	break;
    }
    
    cout << endl;

    inFile.close();
}

void readDirectory(){
	#ifdef _WIN32
	system("dir");
	#elif _WIN64
	system("dir");
	#elif __unix
	system("ls *.csf -a");
	#elif __APPLE__
	system("ls *.csf -a");
	#elif __MACH__
	system("ls *.csf -a");
	#elif __linux__
	system("ls *.csf -a");
	#elif __FreeBSD__
	system("ls *.csf -a");
	#endif
}

void removeCsf(){
	#ifdef _WIN32
	system("del *.csf");
	#elif _WIN64
	system("del *.csf");
	#elif __unix
	system("rm -v *.csf");
	#elif __APPLE__
	system("rm -v *.csf");
	#elif __MACH__
	system("rm -v *.csf");
	#elif __linux__
	system("rm -v *.csf");
	#elif __FreeBSD__
	system("rm -v *.csf");
	#endif
}
