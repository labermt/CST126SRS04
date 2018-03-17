# CST126SRS04  
Women In Computing Linked List  


Class ID: Staryu

SRS ID: CST126SRS04  

Unresolved Issues:  
At point of submission, I had 35 build errors and was unable to compile. The concepts 
are still a little fuzzy, which is why it is difficult to attach the concepts with the data
I have collected. If more time was available, I would rebuild my class definitions. 
This would allow me to tie in the data in a cleaner way. By cleaner, I mean no memory leaks, 
const correctness, etc.

Notes:  
Sources used for 15 women and 2 men (After speaking with Mitch, he expressed that 
this would be an alright change because it paints a better picture of our current
situation) pioneers in computer science - 
	www.women.cs.cmu.edu/ada/Resources/Women/
	www.steveshirley.com
	www.jewishvirtuallibrary.org/kira-radinsky
Tutorial tools used - 
	www.codementor.io/codementorteam/a-comprehensive-guideo-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr
	Powerpoint presentation provided by Mitch Besser, titled SLL Reverse Algorithm
	Paul Programming, youtube series "Creating a Linked List Project in C++ Part 1-7"
---

Purpose:  

- Learn about the role women in Computer Science.  
- Learn about the singly linked list data structure.  
- Learn how to add to, delete, and reverse a singly linked list.  

Instructions:  


Name your project "WICLL".  

Choose 10 women computer scientists for this project.  

You may obtain your list from multiple sources. Here are a couple of examples to get you started:

- [10 Famous Women in Tech History](https://insights.dice.com/2016/03/14/10-famous-women-in-tech-history/)
- [Wikipedia: Women In Computing](https://en.wikipedia.org/wiki/Women_in_computing)

Create a class named CSWoman as follows:  

```
class CSWoman  
{  
private:  
    const std::string name_;  
    const unsigned birthYear_;  
    const std::string fact_;  

public:  
    CSWoman(const char* const name, const unsigned birthYear, const char* const fact);

// ... and other methods  
};  
```

Create at least 10 CSWoman objects on the heap, each representing a woman pioneer in the field of Computer Science. Provide the information described in the CSWoman ctor described above.  

Place each into a singly-linked list data structure.  

Print the list in forward order.  

Reverse the list using the provided algorithm.  

Print the list which is now in the reverse order.  

Tips:  

- All Class Policy rules apply, including but not limited to memory leaks, testing for nullptr, data corruption.  
- I am expecting a perfect submission and a clean project, even if your code fails to run.  
