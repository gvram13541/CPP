/* When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.
When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (error). */

/* Exception handling in C++ consists of three keywords: try, throw and catch:
1. The try statement allows you to define a block of code to be tested for errors while it is being executed.
2. The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
3. The catch statement allows you to define a block of code to be executed if an error occurs in the try block. */

#include <iostream>
using namespace std;

int main()
{
	try {
	throw 'a';
	}
	catch (int x) {
		cout << "Caught " << x;
	}
	catch (...) {
		cout << "Default Exception\n";   // If exception thrown is of non int type then 'catch all' block of code will work.
	}
	return 0;
}

// It's always a good practice to include a 'catch all' block of code in the program for better exception handling.

/* the C++ library has a standard exception class which is the base class for all standard exceptions. All objects thrown by the components of the standard library are derived from this class. 
Therefore, all standard exceptions can be caught by catching this type. */

/*  The use of Dynamic Exception Specification has been deprecated since C++11. One of the reasons for it may be that it can randomly abort your program. 
This can happen when you throw an exception of another type which is not mentioned in the dynamic exception specification. 
Your program will abort itself because in that scenario, it calls (indirectly) terminate(), which by default calls abort(). */

// f both base and derived classes are caught as exceptions, then the catch block of the derived class must appear before the base class. 
// If we put the base class first then the derived class catch block will never be reached. 
 
// C++ Program to demonstrate a catching of
// Derived exception and printing it successfully
#include <iostream>
using namespace std;

class Base {};
class Derived : public Base {};
int main()
{
	Derived d;
	// Some other functionalities
	try {
		// Monitored code
		throw d;
	}
	catch (Derived d) {
		cout << "Caught Derived Exception";      // If base class catch is put first and derived class catch is put later then the compiler throws a warning some compilers throw error.
	}
	catch (Base b) {
		cout << "Caught Base Exception";
	}
	getchar(); // To read the next character
	return 0;
}

