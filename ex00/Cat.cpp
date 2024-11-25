#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "Cat consturecred" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copy constureted" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		Animal::operator=(other);
	}
	std::cout << "Cat assigned" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructed" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Mjau Mjau" << std::endl;
}