// WICLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "wicll.h"

using namespace std;



int main()
{

	CSWoman List;
	List.AddNode("Ada Lovelace", 1815, "First person to write a program.");
	List.AddNode("Grace Hopper", 1906, "First person to create a compiler.");
	List.AddNode("Grete Hermann", 1901, "Published foundational paper on computational algebra.");


	List.PrintList();
	List.reverseList();
	List.PrintList();


	List.DeleteNode("Grace Hopper");
	List.PrintList();


    return 0;
}

