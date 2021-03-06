//include default header
#include "default.h"


//function csv
void mcsv(){

	//locale setting All UTF-8
	char* cpSettings = setlocale(LC_ALL, "en_US.utf8");


//variables
	string location = "myfiles\u005Ccsv\u005C"; //path for csv file
	string namecsv;
	string text;
	int ab, ra;


	//create csv folder
	system("cd myfiles && mkdir csv");

	//I use it to buffer empty
	cin.ignore();
	//cout strings
	cout << "Excel .csv file" << endl;
	cout << G i v e sp i t sp a sp n a m e << ": ";
	//set console codepage 28597
	SetConsoleCP(28597);
	//input file name
	getline(cin, namecsv);
	//set console codepage 737
	SetConsoleCP(737);
	cout << P r e s s sp e n t e r sp  t o sp  c o n t i n u e "..." << endl;
	//I use it to buffer empty
	cin.ignore();
	cout << " \n";
	cout << P r e s s sp e n t e r sp  t o sp  c o n t i n u e "..." << endl;
	//I use it to buffer empty
	cin.ignore();
	//cout string
	cout << H o w sp m a n y sp  t a b l e s sp  d o sp  y o u sp w a n t ": ";
	//input int
	cin >> ra;
	//cout string (enter)
	cout << "\n";
	//I use it to buffer empty
	cin.ignore();
	cout << H o w sp m a n y sp c o l u m n s ": ";
	//input int
	cin >> ab;
	//cout string (enter)
	cout << " \n";
	//I use it to buffer empty
	cin.ignore();
	cout << " \n";
	cout << P r e s s sp e n t e r sp  t o sp  c o n t i n u e "..." << endl;
	//set console codepage 28597
	SetConsoleCP(28597);
	//ofstream open - create file (location and filename with extention)
	ofstream mycsv((location + namecsv + ".csv").c_str());
	//function if open file
	if (mycsv.is_open())
		{
		//I use it to buffer empty
			cin.ignore();
			//loop (for) input number of tables
			for (int tb= 0; tb < ra; tb++) {
				//records write to file
				mycsv << T a b l e sp << tb << "\n";
				//set console codepage 737
				SetConsoleCP(737);
				//cout string (table and number)
				cout << T a b l e sp << tb << "\n";
				cout << P r e s s sp e n t e r sp  t o sp  c o n t i n u e "..." << endl;
				//loop (for) input number of cells
				for (int st = 0; st < ab; st++) {
					//loop (for) input number of columns
					for (int ib = 0; ib < ab; ib++) {
						//I use it to buffer empty
						cin.ignore();
						cout << " " << endl;
						//set console codepage 737
						SetConsoleCP(737);
						//cout string(cells, columns and numbers)
						cout << C e l l sp << ib << sp C o l u m n  sp << ib + 1 << ". ";
						//set console codepage 28597
						SetConsoleCP(28597);
						//input records
						getline(cin, text);
						//set console codepage 737
						SetConsoleCP(737);
						cout << P r e s s sp e n t e r sp  t o sp  c o n t i n u e "..." << endl;
						//set console codepage 28597
						SetConsoleCP(28597);
						//records write to file (between records for the next column)  
						mycsv << text << ";";
					}
					//input record (enter for the bottom cell)
					mycsv << "\n";
				}
			}
		}
			mycsv.close(); //close function of file

			//cout folders and csv files
			cout << " " << endl;
			cout << " " << endl;
			cout << " " << endl;
			system("cd myfiles && cd csv && dir");

	
		}