//include default header
#include "default.h"

//function xls
void mexcel(){

//locale setting All Greek
char* cpSettings = setlocale(LC_ALL, "Greek");

//variables
	string location = "myfiles\u005Cxls\u005C"; //path for xls file
	string namexcel;
	string text;
	int a, r;

	//create xls folder
	system("cd myfiles && mkdir xls");

	//I use it to buffer empty
	cin.ignore();
	//cout strings
	cout << "Excel .xls file" << endl;    	
	cout << Δ ώ σ ε sp ό ν ο μ α << ": ";
	//set console codepage 28597
	SetConsoleCP(28597);
	//input file name
	getline(cin, namexcel);
	//set console codepage 737
	SetConsoleCP(737);
	cout<<"Πατήστε το πλήκτρο enter για να συνεχίσετε..."<<endl;
	//I use it to buffer empty
	cin.ignore();
	cout << " \n";
	cout << "Πατήστε το πλήκτρο enter για να συνεχίσετε..." << endl;
	//I use it to buffer empty
	cin.ignore();
	//cout strings
	cout << Π ό σ ο υ ς sp π ί ν α κ ε ς sp θ έ λ ε ι ς ": ";
	//input int
	cin >> r;
	//cout string (enter)
	cout << " \n";
	//I use it to buffer empty
	cin.ignore();
	//cout strings
	cout << Π ό σ ε ς sp σ τ ή λ ε ς ": ";
	//input int
	cin >> a;
	//cout string (enter)
	cout << " \n";
	//I use it to buffer empty
	cin.ignore();
	cout << " \n";
	cout << "Πατήστε το πλήκτρο enter για να συνεχίσετε..." << endl;
	//ofstream open - create file (location and filename with extention)	
	ofstream myecxel((location + namexcel + ".xls").c_str());
	//function if open file
	if (myecxel.is_open())
		{
		//I use it to buffer empty
			cin.ignore();
			//loop (for) input number of tables
			for (int tb = 0; tb < r; tb++) {
				//records write to file
				myecxel << Π ί ν α κ α ς sp << tb << "\n";
				//set console codepage 737
				SetConsoleCP(737);
				//cout string (table and number)
				cout << Π ί ν α κ α ς sp << tb << "\n";
				cout << "Πατήστε το πλήκτρο enter για να συνεχίσετε..." << endl;
				//loop (for) input number of cells
				for (int st = 0; st < a; st++) {
					//loop (for) input number of columns
					for (int ib = 0; ib < a; ib++) {
						//I use it to buffer empty
						cin.ignore();
						cout << " " << endl;
						//set console codepage 737
						SetConsoleCP(737);
						//cout string(cells, columns and numbers)
						cout << Κ ε λ ί sp << ib << sp Σ τ ή λ η  sp << ib + 1 << ". ";
						//set console codepage 28597
						SetConsoleCP(28597);
						//input records
						getline(cin, text);
						//set console codepage 737
						SetConsoleCP(737);
						cout << "Πατήστε το πλήκτρο enter για να συνεχίσετε..." << endl;
						//set console codepage 28597
						SetConsoleCP(28597);
						//records write to file (between records for the next column) 
						myecxel << text << "\t";
					}
					//input record (enter for the bottom cell)
					myecxel << "\n";
				}
			}
		}
			myecxel.close(); //close function of file

			//cout folders and xls files
			cout << " " << endl;
			cout << " " << endl;
			cout << " " << endl;
			system("cd myfiles && cd xls && dir");
		

		}
