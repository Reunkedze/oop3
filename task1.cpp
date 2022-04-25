#include <iostream>

class Figure {
public:
	Figure() {}
	virtual double area() = 0;
};


class Square : public Figure {
private:
	int a;
public:
	Square(int a) : a(a) {}
	double area(double a) { return a * a; }
};

int main(int argc, const char** argv)
{
	Square s(3);

	return 0;
}
