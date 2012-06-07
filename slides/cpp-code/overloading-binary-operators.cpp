//+ binary non-assignment member function
	class OtherClass { /* ... */ };
	class MyClass {
	public:
		RETURN_TYPE operator@ (OtherClass p) { /* ... */ };
	};

	MyClass a;
	OtherClass b;
	RETURN_TYPE result = a @ b;
//- binary non-assignment member function

//+ binary non-assignment non-member function
	class OtherClass { /* ... */ };
	class MyClass { /* ... */ };
	RETURN_TYPE operator@ (MyClass p0, OtherClass p1) {
		/* ... */
	}

	MyClass a;
	OtherClass b;
	RETURN_TYPE result = a @ b;
//+ binary non-assignment non-member function


//+ binary assignment member function
	class OtherClass { /* ... */ };
	class MyClass {
	public:
		MyClass& operator@ (OtherClass p) {
			/* modify this instance */
			return *this;
		};
	};

	MyClass a;
	OtherClass b; OtherClass c;
	MyClass result = a @ b @ c;
//- binary assignment member function

//+ binary assignment non-member function
	class OtherClass { /* ... */ };
	class MyClass { /* ... */ };
	
	MyClass& operator@ (MyClass& p0, OtherClass p1)
	{
		/* modify p0 */
		return p0;
	}

	MyClass a;
	OtherClass b; OtherClass c;
	MyClass result = a @ b @ c;
//- binary assignment non-member function
