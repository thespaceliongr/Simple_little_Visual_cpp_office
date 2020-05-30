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
	cout << T h e sp f i l e s sp y o u sp w a n t sp t o sp o p e n sp o n l y sp t h e sp n a m e sp w i t h o u t  sp t h e sp s u f f i x << "\n";
	cout << "1. Word .doc ( " << t o sp s e l e c t sp  t h e sp o p t i o n << " 1 )" << "\n";
	cout << "2. Note .txt( " << t o sp s e l e c t sp  t h e sp o p t i o n << " 2 )" << "\n";
	cout << "3. Excel .xls ( " << t o sp s e l e c t sp  t h e sp o p t i o n << " 3 )" << "\n";
	cout << "4. Excel .csv( " << t o sp s e l e c t sp  t h e sp o p t i o n << " 4 )" << "\n";


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
		cout << G i v e sp i t sp a sp n a m e << ":  \n";

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
		cout << G i v e sp i t sp a sp n a m e << ":  \n";
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
		cout << G i v e sp i t sp a sp n a m e << ":  \n";
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
		cout << G i v e sp i t sp a sp n a m e << ":  \n";
		//Input filename
		getline(cin, mystring);
		//shell execute open (location and filename with extention)	
		ShellExecuteA(NULL, "open", (location + mystring + ".csv").c_str(), NULL, NULL, SW_SHOW);
	}
	

}
