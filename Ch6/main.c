/*
	작성일 : 2025-03-20
	작성자 : 김근호
	주제   : 구조체와 포인터 
*/

/*
	구조체의 주소를 선언하고 사용하는 방법

	구조체를 선언한 TYPE : Player

	 타입 이름*		이름;
	 Player*		playerPtr;
*/

/*
	구조체 포인터의 값을 접근하는 방법

	void ShowPlayerInfo(Player* playerPtr)

		1. playerPtr 주소이기 때문에 값에 접근을 해야한다. 역참조연산자를 사용(*playerPtr)
		2. 구조체의 변수에서 데이터에 접근하는 연산자 (접근 연산자 '.') (*playerPtr).playerName;
		3. *playerPtr.playerName 연산자의 우선순위가 존재하기 때문에 *(playerPtr.playerName)
			=> playerPtr 주소에서 playerName을 접근한 후에 그 주소의 값을 역참조해라.
		4. 화살표 연산자: -> 구조체의 주소 변수 ->	*(playerPtr.접근할 데이터)

	{
		(*playerPtr).playerName;
		playerPtr->playerName;		위 두개의 문법은 동일하다
	}
*/

#include "StructPointer.h"
#include "GameUI.h"

int main() {
	//Ch6Example();
	GameStart();
}