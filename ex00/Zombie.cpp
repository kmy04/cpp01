#include "Zombie.hpp"

// 초기화 리스트를 사용한 생성자이다.
Zombie::Zombie(std::string zombieName)
: name(zombieName) {}

// 소멸자이다.
Zombie::~Zombie() {
	std::cout << name << ": disappear" << std::endl;
}

// 자신을 소개하는 함수이다.
void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}