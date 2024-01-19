// required in order to use std::cout
#include <iostream> 
 
/*
	This is a simple hello world program that prints out the string: "Hello, World!" to the console.
	@author Christian Auman
	@version 1.0.0
	@since 2024-1-19
*/
int main() {
	// trycatch for error handling
	try { 
		// prints the string "Hello World!" to console
		std::cout << "Hello, World!";
		exit(0);
	} catch (...) {
		// some major issue went down here....
		exit(1);
	}
}