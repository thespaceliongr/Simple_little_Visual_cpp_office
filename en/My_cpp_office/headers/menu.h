//include headers
#include "default.h"
#include "word.h"
#include "ecxel.h"
#include "csv.h"
#include "txt.h"
#include "read.h"
#include "open.h"

//function menu
void menu() {

//variables
int meu = 0;
int off = 0;
int read = 0;
int def = 0;

//label Start
Start:;

//cout menu
	cout << "1. " << N e w sp f i l e << " (" << t o sp s e l e c t sp  t h e sp o p t i o n <<" 1)" <<"\n";
	cout << "2. " << R e a d << " (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 2)" <<"\n";
	cout << "3. " << O p e n sp w i t h sp  d e f a u l t sp p r o g r a m << " (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 3)" <<"\n";
	
	//Input chooce
	cin >> meu;

	//function if chosen from menu
	if (meu == 1) {
		//system clear console
		system("CLS");
		//cout menu
		cout << "1. Word .doc (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 1)" <<"\n";
		cout << "2. Note .txt (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 2)" <<"\n";
		cout << "3. Excel .xls (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 3)" <<"\n";
		cout << "4. Excel .csv (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 4)" <<"\n";
		cout << "5.  "<< H o m e sp m e n u <<" ("<< t o sp s e l e c t sp  t h e sp o p t i o n << " 5)" <<"\n";
	
		//Input choice
		cin >> off;
	
		//function if chosen from menu
		if (off == 1) {
			//system clear console
			system("CLS");
		//function from word
			mword();
		}

		//function if chosen from menu
		if (off == 2) {
			//system clear console
			system("CLS");
			//function from txt
			mtxt();
		}

		//function if chosen from menu
		if (off == 3) {
			//system clear console
			system("CLS");
			//function from excel
			mexcel();
		}

		//function if chosen from menu
		if (off == 4) {
			//system clear console
			system("CLS");
			//function from csv
			mcsv();
		}

		//function if chosen from menu
		if (off == 5) {
			//system clear console
			system("CLS");
			//go to label
			goto Start;
		}
	}

	//function if chosen from menu
	if (meu == 2) {
		//system clear console
		system("CLS");
		//cout menu
		cout << "1. " << W h a t sp f i l e sp d o sp y o u sp w a n t sp  t o sp r e a d << ";  (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 1)" <<"\n";
		cout << "2.  " << H o m e sp m e n u << " (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 2)" <<"\n";

		//Input choice
		cin >> read;

		//function if chosen from menu
		if (read == 1) {
			//system clear console
			system("CLS");
			mread();
		}

		//function if chosen from menu
		if (read == 2) {
			//system clear console
			system("CLS");
			//go to label
			goto Start;
		}
	}

	//function if chosen from menu
	if (meu == 3) {
		//system clear console
		system("CLS");
		//cout menu
		cout << "1. " << W h a t sp f i l e sp d o sp y o u sp w a n t sp  t o sp o p e n << ";  (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 1)" <<"\n";
		cout << "2.  " << H o m e sp m e n u << " (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 2)" << "\n";

		//Input choice
		cin >> def;

		//function if chosen from menu
		if (def == 1) {
			//system clear console
			system("CLS");
			mopen();
		}

		//function if chosen from menu
		if (def == 2) {
			//system clear console
			system("CLS");
			goto Start;
		}

	}

}

//function menu exit
void menu_exit() {

	//variables
	int end_menu = 0;

	//cout menu
	cout << "1. " << H o m e sp m e n u << " (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 1)" << "\n";
	cout << "2.  " <<E x i t  << " (" << t o sp s e l e c t sp  t h e sp o p t i o n << " 2)" << "\n";

	//Input choice
	cin >> end_menu;

	//function if chosen from menu
	if (end_menu == 1) {
		//system clear console
		system("CLS");
		menu();
	}

	//function if chosen from menu
	if (end_menu == 2) {
		//system exit software console
		exit(0);
	}
}