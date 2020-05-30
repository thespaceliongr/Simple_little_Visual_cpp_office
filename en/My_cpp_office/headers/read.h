//include default header
#include "default.h"





//function read file on console
void mread() {

	//I use it to buffer empty
	cin.ignore();

	//variables
	string line;
	string myrword;
	string myrtxt;
	string myrexcel;
	string myrcsv;
	int rd = 0;




	//cout menu
	cout << T h e sp f i l e s sp y o u sp w a n t sp t o sp r e a d sp o n l y sp t h e sp n a m e sp w i t h o u t sp t h e sp s u f f i x << "\n";
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
		//input file name
		getline(cin, myrword);
		//ifstream open (location and filename with extention)	
		ifstream mydc((location + myrword + ".doc").c_str());
		//function if open file
		if (mydc.is_open())
		{
			//loop (while) input number of lines
			while (getline(mydc, line))
			{
				//cout line with string (enter)
				cout << line << '\n';
			}
		}
		mydc.close(); //close function of file
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
		//input file name
		getline(cin, myrtxt);
	
		//ifstream open (location and filename with extention)	
		ifstream mytxt((location + myrtxt + ".txt").c_str());
		//set console codepage 737
		SetConsoleCP(737);
		//function if open file
		if (mytxt.is_open())
		{
			//loop (while) input number of lines
			while (getline(mytxt, line))
			{
				//cout line with string (enter)
				cout << line << '\n';
			}
		}
		mytxt.close(); //close function of file
	}


	//function if chosen from menu
	if (rd == 3) {

		string location = "myfiles\u005Cxls\u005C"; //path for xls file
		//I use it to buffer empty
		cin.ignore();

		//cout folders and doc files
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		system("cd myfiles && cd xls && dir");
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;



		//cout strings
		cout << G i v e sp i t sp a sp n a m e << ":  \n";
		//set console codepage 28597
		SetConsoleCP(28597);
		//input file name
		getline(cin, myrexcel);
		//set console codepage 737
		SetConsoleCP(737);
		//ifstream open (location and filename with extention)	
		ifstream myxls((location + myrexcel + ".xls").c_str());
		//function if open file
		if (myxls.is_open())
		{
			//loop (while) input number of lines
			while (getline(myxls, line))
			{
				//cout line with string (enter)
				cout << line << '\n';
			}
		}
		myxls.close(); //close function of file
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
		//set console codepage 28597
		SetConsoleCP(28597);
		//input file name
		getline(cin, myrcsv);
		//set console codepage 737
		SetConsoleCP(737);
		//ifstream open (location and filename with extention)	
		ifstream myfcsv((location + myrcsv + ".csv").c_str());
		//function if open file
		if (myfcsv.is_open())
		{
			//loop (while) input number of lines
			while (getline(myfcsv, line))
			{
				//cout line with string (enter)
				cout << line << '\n';
			}
		}
		myfcsv.close(); //close function of file
	}


}