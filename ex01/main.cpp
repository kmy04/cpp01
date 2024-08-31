#include "Zombie.hpp"

// void leak() {
// 	system("leaks zombie");
// }

int main()
{
	// atexit(leak);
	// 좀비 군단을 heap영역에 동적할당으로 생성하는 메소드
	Zombie* horde = Zombie::zombieHorde(5, "asdf");

	for (int i = 0; i < 5; i++)
		horde[i].announce();

	// 동적할당이기 때문에 반드시 해제해줘야한다.
	// 배열의 형태이기때문에, delete에 []를 붙여줘야 한다.
	delete[] horde;

	return (0);
}