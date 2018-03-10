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
	List.addNode("Ada Lovelace", 1815, "First person to write a program.");
	List.addNode("Grace Hopper", 1906, "First person to create a compiler.");
	List.addNode("Grete Hermann", 1901, "Published foundational paper on computational algebra.");
	List.addNode("Jean E. Sammet", 1928, "Developed the FORMAC programming language.");
	List.addNode("Mary Allen Wilkes", 1937, "First person to use computer in a private home.");
	List.addNode("Vera Molnar", 1924, "Pioneer of computer and algorithmic arts.");
	List.addNode("Margaret Burnett", 1949, "First female developer at P&G.");
	List.addNode("Janese Swanson", 1958, "Founded Girl Tech.");
	List.addNode("Frances E. Allen", 1932, "First female IBM Fellow.");
	List.addNode("Megan Smith", 1964, "First female Chief Technology Officer of the United States.");


	List.printList();
	List.reverseList();
	List.printList();


	List.deleteNode("Grace Hopper");
	List.printList();


    return 0;
}

