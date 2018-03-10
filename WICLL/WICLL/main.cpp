#include "stdafx.h"
#include "CSWoman.h"
#include "LinkedList.h"

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))

int main()
{
	const CSWoman * const womanArray[] = {
		new CSWoman("Ada Lovelace", 1815, "First computer programmer ever."),
		new CSWoman("Grete Hermann", 1901, "Wrote book on computerized algebra."),
		new CSWoman("Klara Dan von Neumann", 1911, "Worked on Manhattan Project."),
		new CSWoman("Gertrude Blanch", 1897, "Led the Mathmatical Tables Project during WWII."),
		new CSWoman("Kathleen Booth", 1922, "Wrote assembly language for the ARC2 computer."),
		new CSWoman("Grace Hopper", 1906, "Developed the first compiler for an electronic computer."),
		new CSWoman("Ida Rhodes", 1900, "Co-designed the C-10 language in the early 1950's."),
		new CSWoman("Elizabeth Feinler", 1931, "Defined a simple text file format for Internet host names."),
		new CSWoman("Carol Shaw", 1955, "Game designer for Atari."),
		new CSWoman("Melanie Rieback", 1978, "Programmed the first virus to infect RFID devices.")
	};
	
	//Create linkedlist of 10 programming women
	LinkedList* const listOfWomen = new LinkedList();
	for (int i = 0; i < ARRAY_SIZE(womanArray); i++)
	{
		listOfWomen->add(womanArray[i]);
	}

	//print, reverse, and print again
	listOfWomen->printList();
	listOfWomen->reverse();
	listOfWomen->printList();
	listOfWomen->clearList();

	//clean up heap
	for (int i = 0; i < ARRAY_SIZE(womanArray); i++)
	{
		delete womanArray[i];
	}
	delete listOfWomen;

	return 0;
}