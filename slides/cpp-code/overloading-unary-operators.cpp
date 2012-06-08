//+ unary non-assignment member function
class OtherClass { /* ... */ };
class MyClass {
public:
	RETURN_TYPE operator@ () { /* ... */ }
};

MyClass a;
RETURN_TYPE result = @a;
//-

//+ unary non-assigmnent non-member function
class OtherClass { /* ... */ };
class MyClass { /* ... */ };

RETURN_TYPE operator@ (MyClass p)
{ /* ... */ }

MyClass a;
RETURN_TYPE result = @a;
//-


//+ unary suffix member function
class OtherClass { /* ... */ };
class MyClass {
public:
	MyClass operator@ (int) {
		MyClass ret = *this;	// copy current state
		/* modify this instance */
		return ret;	// return state before modification
	}
};

MyClass a;
MyClass result = a@;
//-

//+ unary suffix non-member function
class OtherClass { /* ... */ };
class MyClass { /* ... */ };

MyClass operator@ (MyClass& p, int)
{
	MyClass ret = p;	// copy current state
	/* modify p */
	return ret;	// return state before modification
}

MyClass a;
MyClass result = a@;
//-
