#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name) {
	// 예외처리
	if (N <= 0)
        return nullptr;

	// 좀비 클래스를 배열로 동적할당
	Zombie* horde = new Zombie[N];

	// 좀비들에게 이름을 세팅해주는 부분
	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}

	// 그렇게 생성된 군단을 반환
	return horde ;
}