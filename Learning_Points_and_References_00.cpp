/*-------------------------------------------------------*\
|														  |
|	                                                      |
|	  Learning all about Pointers and References          |
|                                                         |
|                                                         |
\*-------------------------------------------------------*/

/* NOTES:

	-WHAT IS A POINTER?
		- It is a variable that points to memory address
		- If x is declared as int = 10, Then a pointer variable points to that value in memory
		- Pointers are useful for when needing to access the value from out of scope
			I.E when wanting to gain access to a variable value in a function
		- Operate on arrays well

	-Things to know?
		- Always initliaze your pointers, even if it is null
			- Why? Because they will contain garbage date otherwise
		- The '*' both declares and derefences a varaible
		- C++ allows pointer arthimic 

*/

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

// Defining names instead of using the entire namespace of std
#define _cout std::cout
#define _endl std::endl
#define _string std::string
#define _vector std::vector


int main()
{
    // Declaring pointers
	int *intPointer = nullptr;
	double* doublePointer = nullptr; // Notice the '*', compiler doesn't care if its next to data type or variable name
	char *charPointer = nullptr;
	_string *stringPointer = nullptr;

	//---------------------------------------------------------------//

	// Storing values in a pointer
	int score = 10;
	int *pntr_score = &score;
	_cout << "pntr_score value: " << *pntr_score << _endl; // '*' dereferences the pointer to get the value it points to

	//---------------------------------------------------------------//

	// Demostrating dereferencing with a string
	_string name = "Michael";
	_string *str_ptr = &name;

	_cout << "\nValue of name: " << name << _endl;
	_cout << "Value of str_ptr: " << *str_ptr << _endl; // '*' dereferences the pointer to get the value it points to
	name = "Dave"; // Changes the value of the pointer
	_cout << "Value of str_ptr, after changing variable name value: " << *str_ptr << _endl;

	//---------------------------------------------------------------//

	// Pointers and Vectors
	_vector<_string> vecNames = { "Larry", "Sarry", "Varry" };
	_vector<_string> *vec_ptr = &vecNames;

	_cout << "\nPointing to first name in vector: " << (*vec_ptr).at(0) << _endl;
	_cout << "Pointing to second name in vector: " << (*vec_ptr).at(1) << _endl;
	_cout << "Using range based for loop to point to the vector: ";
	for (auto m : *vec_ptr)
		_cout << m << " ";
	_cout << _endl;

	//---------------------------------------------------------------//

	// Dynamic memory allocation and deleting the memory
	int *int_ptr = nullptr;
	int_ptr = new int; // Uses keyword 'new' to allocate an int on the heap

	delete int_ptr; // Deletes the memory address


	return 0;
}

