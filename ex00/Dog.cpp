#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "Dog consturecred" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copy constureted" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		Animal::operator=(other);
	}
	std::cout << "Dog assigned" << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructed" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Vau Vau" << std::endl;
}
