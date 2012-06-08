struct MyStruct {
	int* m;
	
	MyStruct() { m = new int; }
	~MyStruct() { delete m; }
	
	MyStruct& operator= (MyStruct& p) {
		this->m = p.m;
		delete p.m;
		p.m = 0;
		
		
		
		return *this;
	}
};


struct MyStruct {
	int* m;
	
	MyStruct() { m = new int; }
	~MyStruct() { delete m; }
	
	MyStruct& operator= (MyStruct& p) {
		if(p.m != this->m) {
			this->m = p.m;
			delete p.m;
			p.m = 0;
		}
		
		return *this;
	}
};


MyStruct s;
s = s;
