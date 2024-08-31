#include "Zombie.hpp"

// 동적으로 할당해서 반환하는 메소드
Zombie* Zombie::newZombie(std::string name) {
	return new Zombie(name);
}