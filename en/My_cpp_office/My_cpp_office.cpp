//include headers
#include "headers/home.h"


//main program
int main(void)
{
	//Background color Aqua and text color Light White
	system("color 3F");

	//function into headers
	chars();
	start();
	menu();

	//codepage
	SetConsoleCP(737);

	//cout my signature
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "________________________" << endl;
	cout << S t a v r o s sp V o u r l i o t i s << endl;
	cout << "THE SPACE LION GR NET (" << M y sp w e b s i t e << " http://thespaceliongr.net/ .)" << endl;
	cout << " " << endl;

	//function from menu exit
	menu_exit();

	//I use it like pause
	cin.get();
	//exit
	return 0;
}
