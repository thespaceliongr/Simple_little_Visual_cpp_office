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
	cout << Σ τ α ύ ρ ο ς sp Β ο υ ρ λ ι ώ τ η ς << endl;
	cout << "THE SPACE LION GR NET (" << Η sp ι σ τ ο σ ε λ ί δ α sp μ ο υ << " http://thespaceliongr.net/ .)" << endl;
	cout << " " << endl;

	//function from menu exit
	menu_exit();

	//I use it like pause
	cin.get();
	//exit
	return 0;
}
