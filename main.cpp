#include <iostream>

using namespace std;


/*
every obj has two types: static and dynamic type

static binding:
compile time:
name = func
Base::func
Base::func(int a)

in case we have Derived::func(int a) this will hides all overload of func. to solve this issues do using Base::func

Dynamic binding:
runtime:
Dynamic dispatch: (virtual) (virtual table - compile time generated table which contains function pointers. and every object has a hiddent pointer-vptr which point to this virtual table)
// is vptr in runtime or compile time
Base::func(int a) -> (dynamic type) (most-derived) Derived::func(int a)

*/


class Base
{
	public:
		void func(double a)
		{
			cout << "1 " << a << endl;
		}
};

class Derived : public Base
{
	public:
		using	Base::func;
		void func(int a)
		{
			cout << "2 " << a << endl;
		}
};

int		main()
{
	// Base	*p = new Derived;
	Derived		p;

	p.func(5.4);
	// p->func(5);
}
