//include default header
#include "default.h"


//function doc
void mword(){

	//locale setting All UTF-8
	char* cpSettings = setlocale(LC_ALL, "en_US.utf8");


//variables
	string location = "myfiles\u005Cdoc\u005C"; //path for doc file
	string myword;
	string input;
	string text;
	int num;
	int ib;
	int mb = 0;

	//create doc folder
	system("cd myfiles && mkdir doc");
	

	//I use it to buffer empty
	cin.ignore();
	//cout strings
	cout << "Word file" << endl;
	cout << G i v e sp i t sp a sp n a m e << ": ";
	//set console codepage 28597
	SetConsoleCP(28597);
	//input file name
	getline(cin, myword);
	//set console codepage 737
	SetConsoleCP(737);
	cout << P r e s s sp e n t e r sp  t o sp  c o n t i n u e "..." << endl;
	//I use it to buffer empty
	cin.ignore();
	cout << " \n";
	cout << P r e s s sp e n t e r sp  t o sp  c o n t i n u e "..." << endl;
	//I use it to buffer empty
	cin.ignore();
	//cout strings
	cout << G i v e sp n u m b e r <<": " ;
	//input int
	cin >> num;
	//I use it to buffer empty
	cin.ignore();
	cout << P r e s s sp e n t e r sp  t o sp  c o n t i n u e "..." << endl;
	//loop (for) records lines 
	for (ib = 0; ib< num; ib++) {
		//I use it to buffer empty
		cin.ignore();
		cout << " \n";
		//set console codepage 28597
		SetConsoleCP(28597);
		//ofstream open - create file (location and filename with extention)
		ofstream myword((location + myword + ".doc").c_str());
		//function if open file
		if (myword.is_open())
		{
			//loop (for) input records lines 
			for (ib = 0; ib < num; ib++) {
				//cout numbers of lines
				cout << ib + 1 << ". ";
				//input records
				getline(cin, text);
				//records write to file
				myword << text << " \n";
			}
			myword.close(); //close function of file

		}
	}
	//cout folders and doc files
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	system("cd myfiles && cd doc && dir");

}