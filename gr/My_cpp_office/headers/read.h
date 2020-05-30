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
	cout << Τ α sp α ρ χ ε ί α sp π ο υ sp θ έ λ ε τ ε sp ν α sp δ ι α β ά σ ε τ ε sp μ ό ν ο sp τ ο sp ό ν ο μ α sp χ ω ρ ί ς sp τ η ν sp κ α τ ά λ η ξ η << "\n";
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
		//input file name
		getline(cin, myrword);
		//set console codepage 737
		SetConsoleCP(737);
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
		cout << Δ ώ σ ε sp ό ν ο μ α << ":  \n";
		//set console codepage 28597
		SetConsoleCP(28597);
		//input file name
		getline(cin, myrtxt);
		//set console codepage 737
		SetConsoleCP(737);
		//ifstream open (location and filename with extention)	
		ifstream mytxt((location + myrtxt + ".txt").c_str());
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
		cout << Δ ώ σ ε sp ό ν ο μ α << ":  \n";
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
		cout << Δ ώ σ ε sp ό ν ο μ α << ":  \n";
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