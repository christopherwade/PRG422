
#ifndef CLASS_A
#define CLASS_A





class A
{
	public:
		A() //default constructor
		{
			// new is a memory allocation operator
			array = new int[10];
		}

		~A() // destructor ~ placeholder to release allocated memory
		{
			// memory deallocation operator
			delete[] array;
		}

	private:
		// the notation <TYPE*> means we are delcaring a pointer to a variable of type int
		int* array;
};

#endif // CLASS A