//include default header
#include "default.h"

//function txt
void mtxt(){

//locale setting All Greek
char* cpSettings = setlocale(LC_ALL, "Greek");

//variables
	string location = "myfiles\u005Ctxt\u005C"; //path for txt file
	string nametxt;
	string text;
	int num;
	int i;
	int m = 0;

	//create txt folder
	system("cd myfiles && mkdir txt");

	//I use it to buffer empty
	cin.ignore();
	//cout strings
	cout << "TXT file"<<endl;
	cout << sp << endl;
	cout << Δ ώ σ ε sp ό ν ο μ α << ": ";
	//set console codepage 28597
	SetConsoleCP(28597);
	//input file name
	getline(cin, nametxt);
	//set console codepage 737
	SetConsoleCP(737);
	//cout strings
	cout << " \n";
	cout << "Πατήστε το πλήκτρο enter για να συνεχίσετε..." << endl;
	//I use it to buffer empty
	cin.ignore();
	//cout strings
	cout << Δ ώ σ ε sp α ρ ι θ μ ό <<": " ;
	//input int
	cin >> num;
	//I use it to buffer empty
	cin.ignore();
	cout << "Πατήστε το πλήκτρο enter για να συνεχίσετε..." << endl;
	//loop (for) records lines 
	for (i = 0; i < num; i++) {
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
			for (i = 0; i < num; i++) {
				//cout numbers of lines
				cout << i + 1 << ". ";
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