int a;                       // defines a
extern const int c = 1;      // defines c
int f(int x) { return x+a; } // defines f and defines x
struct S { int a; int b; };  // defines S, S::a, and S::b
struct X {                   // defines X
	int x;                   // defines nonstatic data member x
	static int y;            // declares static data member y
	X(): x(0) { }            // defines a constructor of X
};
int X::y = 1;                // defines X::y
enum { up, down };           // defines up and down
namespace N { int d; }       // defines N and N::d
namespace N1 = N;            // defines N1
X anX;                       // defines anX

extern int a;                // declares a
extern const int c;          // declares c
int f(int);                  // declares f
struct S;                    // declares S
typedef int Int;             // declares Int
extern X anotherX;           // declares anotherX
using N::d;                  // declares N::d
