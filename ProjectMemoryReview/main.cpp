#include <iostream>
using namespace std;
struct Person
{
	string name;
	int id;
};

void Square(int& i)
{
	i = i * i;
}

void Double(int* i)
{
	*i = *i * 2;
}

int main()
{
	int x = 15;						// declare an int variable and set the value to some number
	int& y = x;						// declare a int reference and set it to reference the int variable above
	cout << x << endl;				// output the int variable
	y = 25;							// set the int reference to some other number
	cout << x << endl;				// output the int variable

	// what happened to the int variable when the reference was changed? (insert answer)

	// Answer: The int variable value was also changed along side the int reference.

	cout << &x << endl;				// output the address of the int variable
	cout << &y << endl;				// output the address of the int reference

	// Are the addresses the same or different? (insert answer)

	//Answer: Both Addresses are the same
	
	
	// ** REFERENCE PARAMETER **

	// create a function above main() called Square that takes in an int parameter(void return type)
	// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)

	Square(y);						// call the Square function in main() with the int variable created in the REFERENCE section
	cout << y << endl;				// output the int variable to the console

	// !! notice how the variable has not changed, this is because we only passedthe value to the function !!
	// change the Square function to take a int reference as a parameter
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
		
	// ** POINTER VARIABLE **

	int* z = nullptr;				// declare an int pointer, set it to nullptr (it points to nothing)
	z = &x;							// set the int pointer to the address of the int variable created in the REFERENCE section
	cout << z << endl;				// output the value of the pointer (this is the address it is pointing at)

	// What is this address that the pointer is pointing to? (insert answer)

	// Answer: The Int Variable's Address

	cout << *z << endl;				// output the value of the object the pointer is pointing to (dereference the pointer)
		
		
	// ** POINTER PARAMETER **

	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!

	Double(z);						// call the Double function with the pointer created in the POINTER VARIABLE section
	cout << *z << endl;				// output the dereference pointer
	cout << x << endl;				// output the int variable created in the REFERENCE section
	
	// Did the int variable's value change when using the pointer?
	
	// Answer: Yes, The int variable did change
		
	// ** ALLOCATION/DEALLOCATION **

	int* ptr = new int;				// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	cout << ptr << endl;			// output the pointer value, this should be the address of the int allocated on the heap
	cout << *ptr << endl;			// output the dereferenced pointer
	delete ptr;						// deallocate the int pointer to free up the memory (hint: delete from memory)
	int* ptrs = new int[5];			// create an int pointer that points at an array of ints allocated on the heap, the array size should be 5
	
	
	// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number)
	for (int i = 0; i < 5; i++)
	{
		ptrs[i] = rand() % 10;
	}
	
	// use a for loop and output each of the ints in the array
	for (int i = 0; i < 5; i++)
	{
		cout << ptrs[i] << endl;
	}
		
	// use a for loop and output the address of each of the ints in the array
	for (int i = 0; i < 5; i++)
	{
		cout << &ptrs[i] << endl;
	}
		
	delete[] ptrs;					// deallocate the int pointer to free up the memory block (remember it's an array[])
		
		
	// ** STRUCTURE **
	
	Person* people = new Person[2];	// create a people pointer that points at an array of Persons allocated on the heap, the array size should be 2
		
	// read in a name from the console and set it to the person name, do this for the id also, do this for both people
	for (int i = 0; i < 2; i++)
	{
		cout << "Please Input Person's name." << endl;
		cin >> people[i].name;

		cout << "Please Input Person's ID." << endl;
		cin >> people[i].id;
	}

	// use a for loop and output the name and id of each person in the array 
	for (int i = 0; i < 2; i++)
	{
		cout << people[i].name << endl;
		cout << people[i].id << endl;

	}
	delete[] people;				// deallocate the person pointers to free up the memory block (remember it's an array[])
}