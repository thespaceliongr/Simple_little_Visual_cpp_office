//include default header
#include "default.h"



//function open file with default program
void mopen() {

	//I use it to buffer empty
	cin.ignore();

	//variables
	string line;
	string mystring;
	int rd = 0;




	//cout menu
	cout << Τ α sp α ρ χ ε ί α sp π ο υ sp θ έ λ ε τ ε sp ν α sp α ν ο ί ξ ε τ ε  sp μ ό ν ο sp τ ο sp ό ν ο μ α sp χ ω ρ ί ς sp τ η ν sp κ α τ ά λ η ξ η << "\n";
	cout << "1. Word .doc ( " << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 1 )" << "\n";
	cout << "2. Note .txt( " << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 2 )" << "\n";
	cout << "3. Excel .xls ( " << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 3 )" << "\n";
	cout << "4. Excel .csv( " << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 4 )" << "\n";


	//Input chooce
	cin >> rd;

	//function if chosen from menu
	if (rd == 1) {

		string location = "myfiles\u005Cdoc\u005C"; //path for doc file
		//I use it to buffer empty
		cin.ignore();

		//cout folders and doc files
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		system("cd myfiles && cd doc && dir");
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;

		//cout strings
		cout << Δ ώ σ ε sp ό ν ο μ α << ":  \n";
		//set console codepage 28597
		SetConsoleCP(28597);
		//Input filename
		getline(cin, mystring);
		//shell execute open (location and filename with extention)	
		ShellExecuteA(NULL, "open", (location + mystring + ".doc").c_str(), NULL, NULL, SW_SHOW);
	}


	//function if chosen from menu
	if (rd == 2) {

		string location = "myfiles\u005Ctxt\u005C"; //path for txt file
		//I use it to buffer empty
		cin.ignore();

		//cout folders and txt files
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		system("cd myfiles && cd txt && dir");
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;

		//cout strings
		cout << Δ ώ σ ε sp ό ν ο μ α << ":  \n";
		//set console codepage 28597
		SetConsoleCP(28597);
		//Input filename
		getline(cin, mystring);
		//shell execute open (location and filename with extention)	
		ShellExecuteA(NULL, "open", (location + mystring + ".txt").c_str(), NULL, NULL, SW_SHOW);
	}


	//function if chosen from menu
	if (rd == 3) {

		string location = "myfiles\u005Cxls\u005C"; //path for xls file
		//I use it to buffer empty
		cin.ignore();

		//cout folders and xls files
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		system("cd myfiles && cd xls && dir");
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;


		//cout strings
		cout << Δ ώ σ ε sp ό ν ο μ α << ":  \n";
		//set console codepage 28597
		SetConsoleCP(28597);
		//Input filename
		getline(cin, mystring);
		//shell execute open (location and filename with extention)	
		ShellExecuteA(NULL, "open", (location + mystring + ".xls").c_str(), NULL, NULL, SW_SHOW);
	}


	//function if chosen from menu
	if (rd == 4) {

		string location = "myfiles\u005Ccsv\u005C"; //path for csv file
		//I use it to buffer empty
		cin.ignore();

		//cout folders and csv files
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		system("cd myfiles && cd csv && dir");
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;


		//cout strings
		cout << Δ ώ σ ε sp ό ν ο μ α << ":  \n";
		//set console codepage 28597
		SetConsoleCP(28597);
		//Input filename
		getline(cin, mystring);
		//shell execute open (location and filename with extention)	
		ShellExecuteA(NULL, "open", (location + mystring + ".csv").c_str(), NULL, NULL, SW_SHOW);
	}
	

}
