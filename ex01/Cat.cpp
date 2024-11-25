#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
	type = "Cat";
	std::cout << "Cat consturecred" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	brain = new Brain(*other.brain);
	std::cout << "Cat copy constureted" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "Cat assigned" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructed" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Mjau Mjau" << std::endl;
}
