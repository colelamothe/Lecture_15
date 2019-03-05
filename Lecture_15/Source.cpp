// Lecture 15 midterm review and lecture examples

#include<iostream>
#include<fstream> // used for the input and output of files. combination of ifstream and ofstream
#include<string>


using namespace std;

int main() {
	// Midterm Review
	/*
	Things to know for the midterm:
		- Logical operators and how they can be combined (&&, ||, ==, !, !=, >, <, <=, >=)
		- Mathematical operators and their precedence ( *, +, -, /, (), %)
		- Assignment operators (= ,-=, +=)
		- which libraries must be loaded for the functions that we may need to build a program (iostream, cmath, string, iomanip)
		- conditional statements syntax (if, else, if/else, switch)
		- data type for switch statements
		- looping statements syntax (while, do/while, for)
		- converting between binary, decimal, octal, and hex
		- one and two's complement 
		- usage if cout, cin
		- iomanip operators including \n, \t, endl, right, left, etc.
		- increment & decrement precedence in context
	*/
	// Introducint the file stream commands

	ifstream myFile("samples.txt"); // declares a variable of a file data type and initializes it as "samples.txt" This is the filename of an already existing file. DOES NOT CREATE A FILE.
	// When the compiler looks for a declared file unless told otherwise it assumes that it exists in the running directory of the program.

	string word; // declares a string to be used for input

	myFile >> word; // this takes the first word from the referenced file and assigns it to the variable

	cout << word << endl;

	while (!myFile.eof()) { // This while loop checks if it is at the end of the file and if it is not it pulls the next word and assigns it to 'word' then outputs.
		myFile >> word;
		cout << word << endl;
	}

	myFile.close(); // Closes the referenced file

	system("pause");
	return 0;
}