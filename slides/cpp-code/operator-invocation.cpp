MyClass a;
-a;    // a.operator- () OR operator- (a)
++a;   // a.operator++ () OR operator++ (a)
a++;   // a.operator++ (0) OR operator++ (a, 0)
a->m;  // a.operator-> () and then: depends on return type!

MyClass a;
OtherClass b; OtherClass c;
a + b;    // a.operator+ (b) OR operator++ (a, b)
a[b];     // a.operator[] (b)
a(b, c);  // a.operator() (b, c)
