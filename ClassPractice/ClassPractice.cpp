#include <iostream>
using std::cout;
using std::cin;

class Calc {
private:
	int x, y;

public:
	Calc() { x = 0; y = 0; }

	// MUTATORS
	void SET_FIRST(int _x) { x = _x; }
	void SET_SECOND(int _y) { y = _y; }
	
	// ACCESSORs
	int GET_FIRST() { return x; }
	int GET_SECOND() { return y; }

	// FUNCTIONALITIES
	int addition() { return x + y; }
	int subtraction() { return x - y; }
	int multiplication() { return x * y; }
	int division() { return x / y; }

	~Calc() {}
};

int main() {
	Calc c1;
	Calc c2;
	int x, y;
	cout << "Enter First Number: "; cin >> x;
	cout << "Enter Second Number: "; cin >> y;

	c1.SET_FIRST(x);
	c1.SET_SECOND(y);

	cout << c1.addition() << "\n";
	cout << c1.subtraction() << "\n";
	cout << c1.multiplication() << "\n";
	cout << c1.division();

	return 0;
}