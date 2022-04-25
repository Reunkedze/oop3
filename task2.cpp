#include <iostream>

class Car {
	std::string company;
	std::string model;
public:
	Car(std::string company, std::string model) : company(company), model(model) { }
	std::string getModel() { return this->model; }
};

class PassengerCar : public Car {
public:
	PassengerCar(std::string company, std::string model) : Car(company, model) { }
};

class Bus : public Car {
public:
	Bus(std::string company, std::string model) : Car(company, model) { }
};

class Minivan : public PassengerCar, public Bus {
public:
	Minivan(std::string company, std::string model) : PassengerCar(company, model), Bus(company, model) { }
};

int main(int argc, const char** argv)
{
	Car c("Nisan", "GT");
	std::cout << c.getModel() << std::endl;
	PassengerCar p("Renault", "Sandero");
	std::cout << p.getModel() << std::endl;
	Bus b("Voljanin", "Comfort");
	std::cout << b.getModel() << std::endl;
	Minivan m("Volkswagen", "Transporter");
	std::cout << m.getModel() << std::endl;

	return 0;
}