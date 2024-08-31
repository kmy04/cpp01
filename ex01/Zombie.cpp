#include "Zombie.hpp"

// 이름을 unknown으로 초기화해주는 생성자.
Zombie::Zombie() {
	this->name = "unknown";
}

// 소멸자
Zombie::~Zombie() {
	std::cout << name << ": disappear" << std::endl;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// 이름을 세팅해주는 메소드.
void Zombie::setName(std::string name) {
	this->name = name;
}