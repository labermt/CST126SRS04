#include "stdafx.h"
#include<iostream>
#include "CSWoman.h"
#include "linklist.h"

int main()
{
	auto ada = new CSWoman { "Ada Lovelace", 1815, "Assisted Charls Babbage with coding his machine" };
	auto adele = new CSWoman {"Adele Goldberg", 1945, "Assisted in developing the programming language Smalltalk-80 and various concepts related to object-oriented programming"};
	auto dana = new CSWoman { "Dana Ulery", 1938, "first woman engineer at the NASA Jet Propulsion Laboratory" };
	auto grace = new CSWoman { "Grace B. M. Hopper", 1906, "Invented one of the first compiler related tools" };
	auto ida = new CSWoman {"Ida Rhodes", 1900, "co-designed the C-10 language in the early 1950s for the UNIVAC I "};
	auto jean = new CSWoman { "Jean E. Sammet", 1928, "developed the FORMAC programming language" };
	auto joan = new CSWoman { "Joan Ball", 1934, "Started the first computer dating service" };
	auto kathleen = new CSWoman {"Kathleen Booth", 1922, "Wrote the first assembly language and designed the assembler and autocode for the first computer systems"};
	auto maryC = new CSWoman { "Mary Coombs", 1929, "first woman to work on the LEO computers" };
	auto maryK = new CSWoman {"Mary K. Keller", 1913, "The first woman to earn a Ph.D. in computer science"};

	list theList{};

	theList.addfunc(*ada);
	theList.addfunc(*adele);
	theList.addfunc(*dana);
	theList.addfunc(*grace);
	theList.addfunc(*ida);
	theList.addfunc(*jean);
	theList.addfunc(*joan);
	theList.addfunc(*kathleen);
	theList.addfunc(*maryC);
	theList.addfunc(*maryK);

	theList.printlist();
	theList.reverselist();
	std::cout << "\n";
	theList.printlist();

	theList.deletelist();

    return 0;
}