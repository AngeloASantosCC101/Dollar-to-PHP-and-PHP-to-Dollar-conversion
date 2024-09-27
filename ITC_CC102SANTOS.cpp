#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string type;
	float dol, php, aod, dollar, PHP, exchangeratedtop, exchangerateptod;
	cout << "enter the exchangerate of dollar to PHP :";
	cin >> dol;
	cout << "enter the exchangerate of PHP to Dollar :";
	cin >> php;
	cout << "***********************************************\n";
	cout << "enter amount of Dollar you want to convert :";
	cin >> dollar;
	cout << "enter amount of PHP you want to convert :";
	cin >> PHP;
	cout << "***********************************************\n";
	cout << "type 1 if you want to convert Dollar to PHP\n";
	cout << "type 2 if you want to convert PHP to Dollar\n";
	cin >> type;
	if (type == "1")
	{
		exchangeratedtop = dollar * dol;
		cout << "the dollar will be: PHP" << exchangeratedtop <<endl;
	} else if (type == "2")
	{
		exchangerateptod = PHP * php;
		cout << "the PHP will be: $" << exchangerateptod <<endl;
	}
	
	return 0;
}

		
	
	