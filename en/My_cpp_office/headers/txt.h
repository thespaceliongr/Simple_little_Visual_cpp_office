//include default header
#include "default.h"

//function txt
void mtxt(){

	//locale setting All UTF-8
	char* cpSettings = setlocale(LC_ALL, "en_US.utf8");

//variables
	string location = "myfiles\u005Ctxt\u005C"; //path for txt file
	string nametxt;
	string text;
	int num;
	int ia;
	int ma = 0;

	//create txt folder
	system("cd myfiles && mkdir txt");

	//I use it to buffer empty
	cin.ignore();
	//cout strings
	cout << "TXT file"<<endl;
	cout << sp << endl;
	cout << G i v e sp i t sp a sp n a m e << ": ";
	//set console codepage 28597
	SetConsoleCP(28597);
	//input file name
	getline(cin, nametxt);
	//set console codepage 737
	SetConsoleCP(737);
	//cout strings
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
	for (ia = 0; ia < num; ia++) {
		//I use it to buffer empty
		cin.ignore();
		cout << " \n";
		//set console codepage 28597
		SetConsoleCP(28597);
		//ofstream open - create file (location and filename with extention)
		ofstream mytxt((location + nametxt + ".txt").c_str());
		//function if open file
		if (mytxt.is_open())
		{
			//loop (for) input records lines 
			for (ia = 0; ia < num; ia++) {
				//cout numbers of lines
				cout << ia + 1 << ". ";
				//input records
				getline(cin, text);
				//records write to file
				mytxt << text << " \n";
			}
			mytxt.close(); //close function of file

		}
	}
	//cout folders and txt files
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	system("cd myfiles && cd txt && dir");


}