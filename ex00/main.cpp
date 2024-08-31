#include "Zombie.hpp"

int main()
{
	// heap영역은 동적할당을 통해 할당받는 영역이다. 즉, newZombie는 동적할당으로 생성된 좀비이다.
	Zombie *zombie = Zombie::newZombie("heapZombie");
	zombie->announce();

	// heap영역에 할당된 좀비, 즉 동적할당된 좀비는 꼭 해제해줘야한다.
	delete zombie;

	// randomChump함수로 할당된 좀비는 stack영역에 할당되고
	// 동적할당이 아닌 정적할당이다. 즉, 해제해줄 필요가 없다.
	Zombie::randomChump("stackZombie");
	return (0);
}