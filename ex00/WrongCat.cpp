#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "WrongCat consturecred" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat copy constureted" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	std::cout << "WrongCat assigned" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructed" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "WrongCat sound" << std::endl;
}
