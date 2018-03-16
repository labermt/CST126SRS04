#include "stdafx.h"
#include "CSWoman.h"
#include "slinklist.h"

int main()
{
	SLinkList People_list;
	const auto(Person1) = new CSWoman("Erna Schneider Hoover", 1926, "Invented a computerized telephone switching method.");
	People_list.NodeCreation(Person1);
	const auto(Person2) = new CSWoman("Radia Perlman", 1951, "Invented a spanning-tree protocol.");
	People_list.NodeCreation(Person2);
	const auto(Person3) = new CSWoman("Shafrira Goldwasser", 1958, "Israeli computer scientist who won the Turing Award in 2012.");
	People_list.NodeCreation(Person3); 
	const auto(Person4) = new CSWoman("Anita Borg", 1949, "Founded the Institute for Women and Technology and the Grace Hopper Celebration of Women in Computing.");
	People_list.NodeCreation(Person4); 
	const auto(Person5) = new CSWoman("Frances Allen", 1932, "Achievements in compilers, code optimization and parallelization.");
	People_list.NodeCreation(Person5); 
	const auto(Person6) = new CSWoman("Barbara Liskov", 1939, "Contributed to practical and theoretical foundations of programming language and system design.");
	People_list.NodeCreation(Person6); 
	const auto(Person7) = new CSWoman("Jean Sammet", 1928, "Developed the FORMAC programming language.");
	People_list.NodeCreation(Person7); 
	const auto(Person8) = new CSWoman("Evelyn Granville", 1924, "Second African American woman to receive a PHD in math from an American University.");
	People_list.NodeCreation(Person8); 
	const auto(Person9) = new CSWoman("Stephanie Shirley", 1933, "Helps young women today realize that it can be done. Created a computer company made up of women and is Jewish.");
	People_list.NodeCreation(Person9); 
	const auto(Person10) = new CSWoman("Kira Radinsky", 1986, "Received the Israel Defense Prize while serving in the Israeli army and a co-founder of a sales analytics company. She's 32!");
	People_list.NodeCreation(Person10); 
	const auto(Person11) = new CSWoman("Margaret R. Fox", 1916, "Chief of the Office of Computer Information, Institute for CS and Tech of the National Bureau of Standars.");
	People_list.NodeCreation(Person11); 
	const auto(Person12) = new CSWoman("Kay McNulty Mauchly Antonelli", 1921, "One of the sic original programmers of the ENIAC.");
	People_list.NodeCreation(Person12); 
	const auto(Person13) = new CSWoman("Frances Spence", 1922, "Electric engineer at ENIAC (1947).");
	People_list.NodeCreation(Person13); 
	const auto(Person14) = new CSWoman("Adele Goldstine", 1920, "Wrote the manial for ENIAC.");
	People_list.NodeCreation(Person14); 
	const auto(Person15) = new CSWoman("*Marlyn Meltzer", 1922, "Moore School of Engineering of the University of Pennsylvania hired Marlyn to perform weather calculations.");
	People_list.NodeCreation(Person15); 
	const auto(Person16) = new CSWoman("Larry Page", 1973, "Co-founded Google with Sergey Brin.");
	People_list.NodeCreation(Person16); 
	const auto(Person17) = new CSWoman("Carl Sassenrath", 1957, "Created Amiga computer operating system Kernel.");
	People_list.NodeCreation(Person17);

	SLinkList::NodeListPrint();	{
		cout << People_list << endl;
	};
	SLinkList::NodeListReverse(People_list);
	SLinkList::NodeListPrint()
	{
		cout << People_list << endl;
	};
	SLinkList::DeleteNode(People_list);

    return 0;
}

