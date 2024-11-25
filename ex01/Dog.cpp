#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
	type = "Dog";
	std::cout << "Dog consturecred" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	brain = new Brain(*other.brain);
	std::cout << "Dog copy constureted" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "Dog assigned" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructed" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Vau Vau" << std::endl;
}
