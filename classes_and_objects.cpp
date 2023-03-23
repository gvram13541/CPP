/* In C++, stream insertion operator “<<” is used for output and extraction operator “>>” is used for input. 
We must know the following things before we start overloading these operators. 
1) cout is an object of ostream class and cin is an object of istream class 
2) These operators must be overloaded as a global function. And if we want to allow them to access private data members of the class, we must make them friend. 
Why these operators must be overloaded as global? 
In operator overloading, if an operator is overloaded as a member, then it must be a member of the object on the left side of the operator. 
For example, consider the statement “ob1 + ob2” (let ob1 and ob2 be objects of two different classes). 
To make this statement compile, we must overload ‘+’ in a class of ‘ob1’ or make ‘+’ a global function. 
The operators ‘<<‘ and ‘>>’ are called like ‘cout << ob1’ and ‘cin >> ob1’. 
So if we want to make them a member method, then they must be made members of ostream and istream classes, which is not a good option most of the time.
Therefore, these operators are overloaded as global functions with two parameters, cout and object of user-defined class */

/*
STATIC VARIABLES IN CPP:
-> In C++, a static variable is a variable that is declared with the static keyword. Unlike local variables that are created on the stack and are destroyed
once they go out of scope, static variables are created in a special memory area called the "static data area".
-> A static variable retains its value between function calls, meaning that if you modify the value of a static variable in one function, that value will be
preserved when the function is called again.
-> Static variables are initialized to zero by default if no initialization value is provided. You can initialize static variables at the time of declaration.
-> Static variables can only be accessed within the same file in which they are declared, which means that they have "file scope". This is different from
global variables, which can be accessed from any file.
-> In object-oriented programming, static variables can also be declared at the class level, in which case they are called "class variables" or "static
member variables". These variables are shared among all instances of the class and can be accessed using the scope resolution operator '::'.
-> class MyClass {
public:
    static int count; // declaration of a static member variable
};

int MyClass::count = 0; // definition of the static member variable

int main() {
    MyClass obj1, obj2;
    MyClass::count++; // accessing the static member variable using the class name
    std::cout << MyClass::count << std::endl; // output: 1
    obj1.count++; // accessing the static member variable using an object
    std::cout << obj2.count << std::endl; // output: 2
    return 0;
}
-> Static variables can be useful for implementing global or shared data that should not be accessible outside of a particular module or class. They can 
also be used to maintain state information across function calls, or to cache frequently used data. However, the use of static variables can make your code
more difficult to understand and maintain, so they should be used judiciously.
*/

#include <iostream>
using namespace std;

class Complex
{
private:
	int real, imag;
public:
	Complex(int r = 0, int i =0)
	{ real = r; imag = i; }
	friend ostream & operator << (ostream &out, const Complex &c);
	friend istream & operator >> (istream &in, Complex &c);
};

ostream & operator << (ostream &out, const Complex &c)
{
	out << c.real;
	out << "+i" << c.imag << endl;
	return out;
}

istream & operator >> (istream &in, Complex &c)
{
	cout << "Enter Real Part ";
	in >> c.real;
	cout << "Enter Imaginary Part ";
	in >> c.imag;
	return in;
}

int main()
{
Complex c1;
cin >> c1;
cout << "The complex object is ";
cout << c1;
return 0;
}
