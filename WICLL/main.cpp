// WICLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "wicll.h"

using namespace std;


string a;
int b;
string c;

int main()
{
	


	CSWoman Paul;
	
	auto stop{false};
	int option;
	while (stop == false)
	{
		cout << "Enter name: ";
		cin >> a;
		cout << "Enter birth year: ";
		cin >> b;
		cout << "Enter fun fact about " << a << ": ";
		cin >> c;

		cout << "Would you like to add another name to the list?" << endl;
		cout << "Enter 1 to continue or 0 to stop. ";
		cin >> option;

		Paul.AddNode(a, b, c);

		if (option == 1)
		{
			stop = false;
		}
		else if(option == 0)
		{
			stop = true;
		}
	}

	Paul.PrintList();

	//Paul.DeleteNode(3);
	//Paul.PrintList();


    return 0;
}

