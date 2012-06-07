struct MyStruct {
	int* m;
	
	MyStruct() { m = new int; }
	~MyStruct() { delete m; }
	
	MyStruct& operator= (MyStruct& p) {
		this->m = p.m;
		p.m = 0;
		
		
		return *this;
	}
};


struct MyStruct {
	int* m;
	
	MyStruct() { m = new int; }
	~MyStruct() { delete m; }
	
	MyStruct& operator= (MyStruct& p) {
		int* temp = p.m;
		p.m = 0;
		this->m = temp;
		
		return *this;
	}
};


MyStruct s;
s = s;
