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
	cout << "1. " << Ν έ ο sp α ρ χ έ ι ο <<" ("<< γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε <<" 1)" <<"\n";
	cout << "2. " << Ά ν ο ι γ μ α << " (" << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 2)" <<"\n";
	cout << "3. " << Ά ν ο ι γ μ α sp μ ε sp π ρ ο η π ε λ ε γ μ έ ν ο sp π ρ ό γ ρ α μ μ α << " (" << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 3)" <<"\n";
	
	//Input chooce
	cin >> meu;

	//function if chosen from menu
	if (meu == 1) {
		//system clear console
		system("CLS");
		//cout menu
		cout << "1. Word .doc (" << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 1)" <<"\n";
		cout << "2. Note .txt (" << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 2)" <<"\n";
		cout << "3. Excel .xls (" << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 3)" <<"\n";
		cout << "4. Excel .csv (" << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 4)" <<"\n";
		cout << "5.  "<<Α ρ χ ι κ ό sp μ ε ν ο ύ sp γ ι α <<" ("<< ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 5)" <<"\n";
	
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
		cout << "1. " << Π ι ο sp α ρ χ έ ι ο sp Θ έ λ ε τ ε sp ν α sp δ ι α β ά σ ε τ ε << ";  (" << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 1)" <<"\n";
		cout << "2.  " << Α ρ χ ι κ ό sp μ ε ν ο ύ sp γ ι α << " (" << ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 2)" <<"\n";

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
		cout << "1. " << Π ι ο sp α ρ χ έ ι ο sp Θ έ λ ε τ ε sp ν α sp α ν ο ί ξ ε τ ε << ";  (" << γ ι α sp ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 1)" <<"\n";
		cout << "2.  " << Α ρ χ ι κ ό sp μ ε ν ο ύ sp γ ι α << " (" << ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 2)" <<"\n";

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
	cout << "1. " << Α ρ χ ι κ ό sp μ ε ν ο ύ sp γ ι α << " (" << ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 1)" << "\n";
	cout << "2.  " << Έ ξ ο δ ο ς << " (" << ε π ι λ ο γ ή sp  δ ι α λ ε ξ ε << " 2)" << "\n";

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