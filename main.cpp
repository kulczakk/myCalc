#include <iostream>

#include "mnozenie.h"

#include "dzielenie.h"

#include "odejmowanie.h"

#include "dodawanie.h"

using namespace std;



int a, b;



int main()

{

	int inp;

	cout<<"Podaj a: ";

	cin>>a;

	cout<<endl;

	cout<<"Podaj b: ";

	cin>>b;

	cout<<endl;

	cout<<"Wybierz operacje"<<endl;

	cout<<"[1] a+b "<<endl<<"[2] a-b "<<endl<<"[3] a*b "<<endl<<"[4] a/b"<<endl;

	cin>>inp;



	switch(inp) {

		case 1:

			dodawanie(a,b);

			break;

		case 2:

			odejmowanie(a,b);

			break;

		case 3:

			mnozenie(a,b);

			break;

		case 4:

			dzielenie(a,b);

			break;

		default:

			cout <<"Zla opcja. Koniec programu.";

			break;

	}

	return 0;

}
