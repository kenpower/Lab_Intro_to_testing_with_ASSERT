// Lab_Intro_to_testing_with_ASSERT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isEven(int number)
{
	// return true if number is even, false otherwise
	// Implement this function, then test it in main using _ASSERT
	// at the moment it ALWAYS returns true, which is not correct. Fix it.

	return true;
}

int main()
{
	// Use _ASSERT to test your code
	// _ASSERTE(condition) - if condition is false, the program will terminate with a message that includes the file name and line number
	// You can use _ASSERTE to test your code by checking if the output of a function is what you expect it to be
	// For example, you can test the isEven function like this:
	// _ASSERT(isEven(4) == true);
	// _ASSERT(isEven(5) == false);

	// If you run the program and the assertions are true, nothing will happen
	// If any assertion is false, the program will terminate and show you which assertion failed

	
	_ASSERTE(7 * 6 == 41); // This assertion will fail and terminate the program, so the tests below will not run, fix it

	// Now test the isEven function with various inputs
    _ASSERT(isEven(6) == true);
	_ASSERT(isEven(7) == false);

    std::cout << "All tests pass!\n";
}


