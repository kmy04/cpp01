#include "Zombie.hpp"

// 정적으로 생성해서 생성자를 통해 이름을 부여하고 announce함수를 통해 소개한다.
void Zombie::randomChump(std::string name) {
	Zombie zombie(name);
	zombie.announce();
}