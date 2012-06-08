struct X {                   // defines X
	int x;                   // defines data member x
	X(): x(0) { }            // defines a constructor of X
};
int f(int x) { return x+a; } // defines f and defines x
struct S;                    // declares S
extern X anotherX;           // declares anotherX
struct S { int a; int b; };  // defines S, S::a, and S::b
int f(int);                  // declares f
namespace N { int d; }       // defines N and N::d
extern int a;                // declares a
enum { up, down };           // defines up and down
extern const int c = 1;      // defines c
X anX;                       // defines anX
int a;                       // defines a
